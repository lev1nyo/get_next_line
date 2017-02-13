/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:17:53 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/30 12:46:45 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	unsigned int		str_count(char const *s)
{
	unsigned int	size;

	size = 0;
	while (s[size])
		size++;
	return (size);
}

char						*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	size1;
	unsigned int	size_sum;
	unsigned int	count;
	char			*temp;

	if ((!(s1)) || (!(s2)))
		return (0);
	size1 = str_count(s1);
	size_sum = size1 + str_count(s2);
	if (!(temp = (char*)malloc(sizeof(char) * (size_sum + 1))))
		return (0);
	count = 0;
	while (count <= size_sum)
	{
		if (count < size1)
			temp[count] = s1[count];
		else
			temp[count] = s2[count - size1];
		count++;
	}
	return (temp);
}
