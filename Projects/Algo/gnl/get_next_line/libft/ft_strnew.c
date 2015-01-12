/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaiffe <rgaiffe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 09:22:52 by rgaiffe           #+#    #+#             */
/*   Updated: 2014/12/15 18:25:36 by dlevy            ###   ########.fr       */
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
