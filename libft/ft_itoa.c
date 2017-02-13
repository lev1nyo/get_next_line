/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 09:59:06 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/30 12:04:25 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int					numb(int n)
{
	int	len;

	len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static int			pow(int num, int len)
{
	int res;

	if (len <= 0)
		return (1);
	res = 1;
	while (len--)
		res *= num;
	return (res);
}

char				*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		i;

	len = numb(n);
	if (n <= 0)
		str = (char*)malloc(sizeof(char) * (len + 2));
	else
		str = (char*)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	i = 0;
	if (n < 0 && ++i)
		str[0] = '-';
	if (n == 0 && ++i)
		str[0] = '0';
	while (--len >= 0)
	{
		if (n < 0)
			str[i++] = '0' - (n / pow(10, len)) % 10;
		else
			str[i++] = '0' + (n / pow(10, len)) % 10;
	}
	str[i] = 0;
	return (str);
}
