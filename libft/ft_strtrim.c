/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 14:52:39 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/30 12:45:14 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned int		size_str(char const *s)
{
	unsigned int size;
	unsigned int j;

	j = 0;
	size = 0;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && s[j])
		j++;
	while (s[j + size])
		size++;
	if (!size)
		return (0);
	size--;
	while ((s[j + size] == ' ' || s[j + size] == '\n' || s[j + size] == '\t')
		&& ((size + j) > 0))
		size--;
	return (size + 1);
}

char					*ft_strtrim(char const *s)
{
	unsigned int	size1;
	unsigned int	size2;
	unsigned int	count;
	char			*temp;

	if (!(s))
		return (0);
	size1 = size_str(s);
	if (!(temp = (char *)malloc(sizeof(char) * (size1 + 1))))
		return (0);
	count = 0;
	while ((s[count] == ' ' || s[count] == '\n'
			|| s[count] == '\t') && s[count])
		count++;
	size2 = 0;
	while (size2 < size1)
	{
		temp[size2] = s[size2 + count];
		size2++;
	}
	temp[size2] = 0;
	return (temp);
}
