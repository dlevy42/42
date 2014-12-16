/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/01 10:56:27 by dlevy             #+#    #+#             */
/*   Updated: 2014/12/10 12:47:44 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	list->next = NULL;
	if (content == NULL)
	{
		list->content = NULL;
		list->content_size = 0;
	}
	else if (!(list->content = malloc(sizeof(content_size))))
		return (NULL);
	else
	{
		list->content_size = content_size;
		ft_memcpy(list->content, content, list->content_size);
	}
	return (list);
}
