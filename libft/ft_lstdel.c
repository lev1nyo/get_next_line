/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevitan <alevitan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 11:58:06 by alevitan          #+#    #+#             */
/*   Updated: 2016/11/30 12:11:48 by alevitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*new_next;
	t_list	*new_curr;

	new_curr = *alst;
	new_next = new_curr->next;
	del(new_curr->content, new_curr->content_size);
	new_curr = new_next;
	while (new_curr)
	{
		new_next = new_curr->next;
		del(new_curr->content, new_curr->content_size);
		free(new_curr);
		new_curr = new_next;
	}
	free(*alst);
	*alst = 0;
}
