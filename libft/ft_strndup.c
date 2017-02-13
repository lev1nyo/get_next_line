/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 11:50:51 by alevitan          #+#    #+#             */
/*   Updated: 2017/01/18 12:09:23 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *s1, size_t n)
{
	char	*res;
	int		i;
	size_t	size;

	size = (n < ft_strlen(s1) ? n + 1 : ft_strlen(s1) + 1);
	res = (char *)malloc(sizeof(char) * size);
	if (!res)
		return (NULL);
	i = -1;
	while (s1[++i] && --size > 0)
		res[i] = s1[i];
	res[i] = '\0';
	return (res);
}
