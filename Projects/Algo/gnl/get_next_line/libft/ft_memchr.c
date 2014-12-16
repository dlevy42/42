/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 18:51:07 by dlevy             #+#    #+#             */
/*   Updated: 2014/11/13 18:59:33 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (s == 0)
		return (0);
	else if (n == 0)
		return (0);
	else if (*((unsigned char *)s) == (unsigned char)c)
		return ((void *)s);
	else
		return (ft_memchr(s + 1, c, n - 1));
}
