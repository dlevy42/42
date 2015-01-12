/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaiffe <rgaiffe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 09:25:03 by rgaiffe           #+#    #+#             */
/*   Updated: 2014/12/15 11:12:11 by rgaiffe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *out;

    if (!s1 && !s2)
        return (NULL);
    if (!s1 && s2)
        return (ft_strdup((char *)s2));
    if (s1 && !s2)
        return (ft_strdup((char *)s1));
    out = ft_strnew((ft_strlen(s1) + ft_strlen(s2) + 1));
    if (out == NULL)
        return (NULL);
    out = ft_strcat(out, s1);
    out = ft_strcat(out, s2);
    return (out);
}
