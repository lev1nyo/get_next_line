/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 10:02:05 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/29 10:33:25 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned long	j;

	if ((unsigned long)dst < (unsigned long)src)
	{
		j = 0;
		while (len-- > 0)
		{
			((unsigned char*)dst)[j] = ((unsigned char*)src)[j];
			j++;
		}
	}
	else
		while (len-- > 0)
			((unsigned char*)dst)[len] = ((unsigned char*)src)[len];
	return (dst);
}
