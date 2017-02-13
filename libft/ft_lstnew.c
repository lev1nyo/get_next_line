/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 11:58:06 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/30 12:12:37 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	size_t	count;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (0);
	if (!content)
		new->content = 0;
	else
	{
		new->content = malloc(content_size);
		count = 0;
		while (count < content_size)
		{
			((char *)(new->content))[count] = ((char *)(content))[count];
			count++;
		}
	}
	new->content_size = (content) ? content_size : 0;
	new->next = 0;
	return (new);
}
