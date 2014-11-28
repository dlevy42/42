/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 20:35:05 by dlevy             #+#    #+#             */
/*   Updated: 2014/11/28 11:50:35 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len2;

	if (*s2 == '\0')
		return ((char *)s1);
	len2 = ft_strlen(s2);
	while (*s1 && n >= len2)
	{
		if (ft_memcmp(s1, s2, len2) == 0)
			return ((char *)s1);
		s1++;
		n--;
	}
	return (NULL);
}
