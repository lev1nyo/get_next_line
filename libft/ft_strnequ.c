/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:24:00 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/30 12:43:25 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(char	const *s1, char const *s2, size_t n)
{
	unsigned int	count;

	if ((!(s1)) || (!(s2)))
		return (0);
	count = 0;
	while (s1[count] && count < (unsigned int)n)
	{
		if ((unsigned char)s1[count] - (unsigned char)s2[count])
			return (0);
		count++;
	}
	if ((unsigned char)s1[count] - (unsigned char)s2[count]
		&& (count != (unsigned int)n))
		return (0);
	else
		return (1);
}
