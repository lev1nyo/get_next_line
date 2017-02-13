/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 11:58:07 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/30 12:15:57 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	unsigned long i;
	unsigned long j;

	i = 0;
	j = 0;
	while (s[++i])
		if (s[i] == (char)c)
			j = i;
	if (!c)
		return ((char *)(s + i));
	if (!j)
		return ((s[0] == (char)(c)) ? (char *)s : 0);
	return ((char *)(s + j));
}
