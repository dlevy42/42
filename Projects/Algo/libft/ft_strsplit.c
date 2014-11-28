/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 10:54:37 by dlevy             #+#    #+#             */
/*   Updated: 2014/11/28 14:01:38 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	unsigned int	begin;
	unsigned int	nb_splits;
	char			**splits;

	i = 0;
	nb_splits = 0;
	begin = 0;
	if (!s || !c || !(splits = (char **)malloc(sizeof(char) * ft_strlen(s))))
		return (0);
	while (i < ft_strlen(s))
	{
		if (s[i] == c && s[i + 1] != c)
			begin = i + 1;
		else if ((s[i] != c && s[i + 1] == c) || i == ft_strlen(s) - 1)
		{
			splits[nb_splits] = ft_strnew(i - begin + 1);
			splits[nb_splits] = ft_strsub(s, begin, (i - begin + 1));
			nb_splits++;
		}
		i++;
	}
	return (splits);
}
