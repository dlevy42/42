/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 11:23:04 by dlevy             #+#    #+#             */
/*   Updated: 2014/11/25 10:35:43 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == '\n' || s[i] == '\t' || s[i] == ' ')
		i++;
	if (i == j + 1)
		return (ft_strnew(0));
	while (s[j] == '\n' || s[j] == '\t' || s[j] == ' ')
		j--;
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!str)
		return (NULL);
	str = ft_strsub(s, i, (j - (i - 1)));
	str[j - i + 1] = '\0';
	return (str);
}
