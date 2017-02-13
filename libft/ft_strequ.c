/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 12:44:32 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/28 13:14:48 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strequ(char const *s1, char const *s2)
{
	unsigned int count;

	if ((!(s1) || !(s2)))
		return (0);
	count = 0;
	while (s1[count])
	{
		if ((unsigned char)s1[count] - (unsigned char)s2[count])
			return (0);
		count++;
	}
	if (s2[count])
		return (0);
	else
		return (1);
}
