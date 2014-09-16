/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/16 23:21:33 by dlevy             #+#    #+#             */
/*   Updated: 2014/09/16 23:47:37 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(void)
{
	int a;
	int b;

	a = 42;
	b = 24;
//	printf("valeur a = %d\nvaleur b = %d\n", a , b); --	[just for test]
	ft_swap(&a, &b); // '&' renvoie de l'adresse de a et b
//	printf("valeur a = %d\nvaleur b = %d\n", a , b); --	[just for test]
	return (0);
}
