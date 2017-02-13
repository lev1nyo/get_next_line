/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 11:47:07 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/30 12:48:01 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		count_word(char const *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

static int		len(char const *s, char c)
{
	int len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static	char	*nw_w(char const *s, char c)
{
	int		test;
	int		size;
	char	*temp;

	test = 0;
	size = len(s, c);
	temp = (char *)malloc(sizeof(char) * (size + 1));
	while (s[test] && s[test] != c)
	{
		temp[test] = s[test];
		test++;
	}
	temp[test] = 0;
	return (temp);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**wrd;
	int		i;
	int		j;
	int		k;

	if (!(s))
		return (0);
	k = count_word(s, c);
	if (!(wrd = (char **)malloc(sizeof(char *) * (k + 1))))
		return (0);
	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] == c)
			j++;
		if (!s[j])
			break ;
		wrd[i] = nw_w(s + j, c);
		i++;
		while (s[j] != c && s[j])
			j++;
	}
	wrd[i] = 0;
	return (wrd);
}
