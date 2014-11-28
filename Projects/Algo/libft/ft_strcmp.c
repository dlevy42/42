/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 20:02:28 by dlevy             #+#    #+#             */
/*   Updated: 2014/11/20 16:45:44 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (0);
	else if (*s1 == *s2)
		return (ft_strcmp(s1 + 1, s2 + 1));
	else
		return ((unsigned char)*s1 - (unsigned char)*s2);
}
