/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 14:56:07 by dlevy             #+#    #+#             */
/*   Updated: 2014/11/20 16:04:00 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nonum(char c)
{
	if (c == '-' || c == '+' || c == ' ' || c == '\f')
		return (1);
	if (c == '\n' || c == '\v' || c == '\t' || c == '\r')
		return (1);
	else
		return (0);
}

int		sign(char c)
{
	if (c == '-')
		return (0);
	if (c == '+')
		return (1);
	return (-1);
}

int		ft_atoi(const char *nptr)
{
	int		i;
	int		result;
	int		neg;

	if (nptr == NULL)
		return (0);
	neg = 1;
	result = 0;
	i = 0;
	while (nonum(nptr[i]) == 1 && nptr[i] != '\0')
	{
		if (nptr[i] == '-')
			neg = (-1);
		if (sign(nptr[i]) >= 0 && ft_isdigit(nptr[i + 1]) != 1)
			return (0);
		i++;
	}
	while (ft_isdigit(nptr[i]) == 1 && nptr[i] != '\0')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * neg);
}
