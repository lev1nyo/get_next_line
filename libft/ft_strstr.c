/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 11:58:07 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/30 12:42:04 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	len(const char *s)
{
	int	len;

	len = -1;
	while (s[++len])
		;
	return (len);
}

char		*ft_strstr(const char *big, const char *little)
{
	int	i;
	int	j;

	if (!len(little))
		return ((char *)big);
	i = 0;
	while (big[i + len(little) - 1] && big[i])
	{
		if (big[i] == *little)
		{
			j = 0;
			while (big[i + j] == little[j] && big[i + j])
				j++;
			if (j == len(little))
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
