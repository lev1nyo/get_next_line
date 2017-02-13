/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 15:04:06 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/29 14:49:07 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*temp;
	size_t	i;

	if (!(temp = (char *)malloc(size + 1)))
		return (0);
	i = 0;
	while (i <= size)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}
