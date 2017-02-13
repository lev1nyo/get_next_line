/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 11:58:06 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/30 12:15:03 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int end;
	int i;

	i = -1;
	end = 0;
	while (s1[++i] != '\0' && !(end))
		end = (int)((unsigned char)s1[i] - (unsigned char)s2[i]);
	end = (!end) ? ((int)((unsigned char)s1[i] - (unsigned char)s2[i]))
		: end;
	return (end);
}
