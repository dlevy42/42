/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/16 10:23:59 by dlevy             #+#    #+#             */
/*   Updated: 2014/12/16 10:24:01 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	str = malloc((size + 1) * sizeof(char));
	if (str == 0)
		return (0);
	i = 0;
	while (i < (size + 1))
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
