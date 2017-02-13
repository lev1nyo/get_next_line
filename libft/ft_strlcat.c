/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 11:58:06 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/30 12:15:23 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	unsigned long	s1_len;
	unsigned long	s2_len;
	unsigned long	count;

	count = 0;
	while (s1[count] != '\0')
		count++;
	s1_len = count;
	count = 0;
	while (s2[count] != '\0')
		count++;
	s2_len = count;
	count = 0;
	while (s2[count] != '\0' && ((s1_len + count) < (n - 1)))
	{
		s1[s1_len + count] = s2[count];
		count++;
	}
	s1[s1_len + count] = '\0';
	return ((size_t)(s2_len + ((s1_len < n) ? s1_len : n)));
}
