/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 20:21:04 by dlevy             #+#    #+#             */
/*   Updated: 2014/11/20 16:46:58 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0 || (*s1 == 0 && *s2 == 0))
		return (0);
	else if (*s1 == *s2 && n > 1)
		return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
	else
		return ((int)((unsigned char)*s1 - (unsigned char)*s2));
}
