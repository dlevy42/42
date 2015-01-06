/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 09:47:32 by dlevy             #+#    #+#             */
/*   Updated: 2015/01/05 15:25:22 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "get_next_line.h"

static int		ft_check_tmp(char *str) /*Pourquoi static ? -- Probleme de Normes*/
{										/*tmp = tableaux ou sera stocké fd*/
	int		i;

	i = 0;
	if (!str)
		return (1);
	while (str[i])
	{
		if (str[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}

static char		*ft_read_buffer(char *str, char **line)	/*char **line est le meme que celui de la fonction GNL*/
{														/* *str = chaine de char dans fd */
	size_t	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!(*line = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	if (i == 0)
	{
		*line = NULL;
		return ("\0");
	}
	*line = ft_strsub(str, 0, i);
	return (&str[i] + 1);
}

int				get_next_line(int const fd, char **line)
{
	int				ret;
	static char		*tmp[256];
	char			*buffer;

	if (!line || fd < 0 || !(buffer = ft_strnew(BUF_SIZE)))
		return (-1);
	while (ft_check_tmp(tmp[fd]) && (ret = read(fd, buffer, BUF_SIZE)))
	{
		if (ret < 0)
			return (-1);
		buffer[ret] = '\0';
		if (ret == 0)
		{
			if (!tmp[fd])
				return (0);
			break ;
		}
		tmp[fd] = ft_strjoin(tmp[fd], buffer);
	}
	if (*tmp[fd])
	{
		tmp[fd] = ft_read_buffer(tmp[fd], line);
		return (1);
	}
	return (0);
}
