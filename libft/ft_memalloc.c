/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 10:19:19 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/29 14:39:52 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void			*temp;
	unsigned int	count;

	temp = malloc(size);
	if (temp == 0)
		return (0);
	count = 0;
	while (count < (unsigned int)size)
	{
		(*((unsigned char *)(temp + count))) = 0;
		count++;
	}
	return (temp);
}
