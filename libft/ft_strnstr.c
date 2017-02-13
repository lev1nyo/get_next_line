/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 10:03:18 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/29 10:53:27 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[0])
		return ((char*)big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && (i + j) < len
				&& big[i + j] && little[j])
			j++;
		if (!little[j])
			return (&((char*)big)[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
