/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 11:58:07 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/30 12:16:08 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char	const *s, unsigned int start, size_t len)
{
	char			*temp;
	unsigned int	i;

	if (!(s))
		return (0);
	temp = (char *)malloc(sizeof(char) * (len + 1));
	if (temp == 0)
		return (temp);
	i = 0;
	while (i < (unsigned int)len)
	{
		temp[i] = s[start + i];
		i++;
	}
	temp[i] = 0;
	return (temp);
}
