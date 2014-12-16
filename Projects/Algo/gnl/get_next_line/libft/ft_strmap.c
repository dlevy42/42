/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 11:21:35 by dlevy             #+#    #+#             */
/*   Updated: 2014/11/19 13:41:51 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	if (s == 0 || f == 0)
		return (0);
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == 0)
		return (0);
	i = 0;
	while (*s != 0)
	{
		str[i] = (*f)(*s);
		i++;
		s++;
	}
	str[i] = 0;
	return (str);
}
