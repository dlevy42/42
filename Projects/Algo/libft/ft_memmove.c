/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 17:48:35 by dlevy             #+#    #+#             */
/*   Updated: 2014/11/27 17:59:00 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	tmp[n];

	i = 0;
	if (!s1 || !s2)
		return (0);
	ft_memcpy(tmp, s2, n);
	while (tmp[i] && n--)
	{
		((unsigned char *)s1)[i] = tmp[i];
		i++;
	}
	return (s1);
}
