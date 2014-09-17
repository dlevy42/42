/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/16 23:49:14 by dlevy             #+#    #+#             */
/*   Updated: 2014/09/17 02:03:22 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char tmp; // tmp est juste un contenant, en (tres) gros, c'est a l'interieur que le swap va s'effectuer

	i = 0;
	j = (ft_strlen(str) - 1);
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		j--;
		i++;
	}
}

int		main(void)
{
	char	str[] = "Hello"; //str[] n'est pas a la norme, juste pour tester
	ft_strrev(str);
	printf("str = %s\n", str);
	return (0);
}
