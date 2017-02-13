/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 09:15:33 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/29 14:47:33 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl(char const *s)
{
	unsigned int i;

	if (!(s))
		return ;
	i = 0;
	while (s[i])
		i++;
	write(1, s, i);
	write(1, "\n", 1);
}
