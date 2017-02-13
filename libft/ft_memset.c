/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 10:02:09 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/29 11:25:42 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	count;

	count = 0;
	while (count < (unsigned long)len)
		*((unsigned char*)(b + count++)) = (unsigned char)c;
	return (b);
}
