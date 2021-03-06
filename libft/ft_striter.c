/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 10:47:36 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/28 10:57:23 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	if (!(s))
		return ;
	i = -1;
	while (s[++i])
		(*f)(s + i);
}
