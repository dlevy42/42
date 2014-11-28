/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 15:40:15 by dlevy             #+#    #+#             */
/*   Updated: 2014/11/24 19:57:38 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (0);
	else if (*((unsigned char *)s1) != *((unsigned char *)s2) || n == 1)
		return (*((unsigned char *)s1) - *((unsigned char *)s2));
	else
		return (ft_memcmp(s1 + 1, s2 + 1, n - 1));
}
