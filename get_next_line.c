/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 10:33:42 by alevitan          #+#    #+#             */
/*   Updated: 2017/01/19 09:06:36 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

int		find_newline(char *buff)
{
	char *tmp;

	tmp = buff;
	while (buff && *buff)
	{
		if (*buff == '\n')
			return (buff - tmp);
		buff++;
	}
	return (-1);
}

char	*kopirator(char **buff)
{
	char	*temp;
	int		count;
	char	*tmp;

	if ((count = find_newline(*buff)) >= 0)
	{
		temp = ft_strndup(*buff, count);
		tmp = *buff;
		*buff = ft_strdup(&(*buff)[count + 1]);
		free(tmp);
	}
	else
	{
		temp = ft_strdup(*buff);
		free(*buff);
		*buff = NULL;
	}
	return (temp);
}

void	saver(char **ret, char *buffer)
{
	char	*tmp;

	tmp = *ret;
	if (*ret == NULL)
		*ret = ft_strdup(buffer);
	else
		*ret = (ft_strjoin(*ret, buffer));
	free(tmp);
}

int		get_next_line(int const fd, char **line)
{
	static char	*buff[MAX_FD];
	char		temp[BUFF_SIZE + 1];
	int			count;

	if (fd < 0 || fd > MAX_FD || BUFF_SIZE < 1)
		return (-1);
	count = BUFF_SIZE;
	while (find_newline(buff[fd]) < 0 && count == BUFF_SIZE)
	{
		if ((count = read(fd, temp, BUFF_SIZE)) < 0)
			return (-1);
		temp[count] = '\0';
		saver(&buff[fd], temp);
	}
	if (*buff[fd])
	{
		if (!(*line = kopirator(&buff[fd])))
			return (-1);
		else
			return (1);
	}
	if (!(*line))
		*line = ft_strdup("");
	return (0);
}
