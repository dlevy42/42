/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 13:47:00 by dlevy             #+#    #+#             */
/*   Updated: 2014/11/24 12:51:04 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*loc;

	while (*s != 0)
	{
		if (*s == (char)c)
			loc = (char *)s;
		s++;
	}
	if ((char)c == 0)
		return ((char *)s);
	else
		return (loc);
}
