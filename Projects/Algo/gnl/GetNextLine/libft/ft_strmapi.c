/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 11:21:51 by dlevy             #+#    #+#             */
/*   Updated: 2014/11/21 15:23:10 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (s == 0 || f == 0)
		return (0);
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == 0)
		return (0);
	i = 0;
	while (*s != 0)
	{
		str[i] = (*f)(i, *s);
		s++;
		i++;
	}
	str[i] = 0;
	return (str);
}
