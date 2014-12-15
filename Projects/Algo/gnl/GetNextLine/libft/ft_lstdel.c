/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/02 14:38:04 by dlevy             #+#    #+#             */
/*   Updated: 2014/12/02 17:42:12 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*tmptwo;

	if (!alst || !del)
		return ;
	if (!(tmp = malloc(sizeof(t_list))))
		return ;
	tmp = *alst;
	while (tmp->next != NULL)
	{
		tmptwo = tmp;
		del(tmptwo->content, tmptwo->content_size);
		free(tmptwo);
		tmp = tmp->next;
	}
	del(tmp->content, tmptwo->content_size);
	free(tmp);
	*alst = NULL;
}
