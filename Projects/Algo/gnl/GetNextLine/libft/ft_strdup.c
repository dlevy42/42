/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:53:48 by dlevy             #+#    #+#             */
/*   Updated: 2014/11/12 12:44:59 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*str;
	int		j;
	char	*s2;

	if (!s1)
		return (0);
	str = (char *)s1;
	size = (ft_strlen(str));
	s2 = (char *)malloc(sizeof(char *) * (size + 1));
	if (!s2)
		return (0);
	j = 0;
	while (j < size)
	{
		s2[j] = str[j];
		j++;
	}
	j = '\0';
	return (s2);
}
