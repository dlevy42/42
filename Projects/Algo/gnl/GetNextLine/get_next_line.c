/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 14:41:52 by dlevy             #+#    #+#             */
/*   Updated: 2014/12/15 14:42:01 by dlevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		ft_check_tmp(char *tmp)
{
	size_t	i;

	if (!tmp)
		return (1);
	i = 0;
	while (tmp[i])
	{
		if (tmp[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}

static char		*ft_read_buffer(char *src, char **line)
{
	size_t	i;

	i = 0;
	while (src[i] && src[i] != '\n')
		i++;
	if (!(*line = malloc(i + 1)))
		return (NULL);
	if (i == 0)
	{
		*line = NULL;
		return ("\0");
	}
	*line = ft_strsub(src, 0, i);
	return (&src[i + 1]);
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
