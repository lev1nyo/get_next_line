/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 10:00:55 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/30 12:00:56 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned long	temp;

	temp = 0;
	while (temp < (unsigned long)n)
		((unsigned char*)s)[temp++] = '\0';
}
