/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 20:30:35 by dlevy             #+#    #+#             */
/*   Updated: 2014/11/20 16:43:31 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	if (*s2 == 0)
		return ((char *)s1);
	else if (*s1 == 0)
		return (0);
	else if (ft_strncmp(s1, s2, ft_strlen(s2)) == 0)
		return ((char *)s1);
	else
		return (ft_strstr(s1 + 1, s2));
}
