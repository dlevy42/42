/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 16:05:25 by dlevy             #+#    #+#             */
/*   Updated: 2014/11/17 16:41:47 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(dst);
	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	i = 0;
	while (src[i] != '\0' && (len + i) < (size - 1))
	{
		dst[i + len] = src[i];
		i++;
	}
	dst[len + i] = 0;
	return (len + ft_strlen(src));
}
