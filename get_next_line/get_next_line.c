/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:28:36 by taokada           #+#    #+#             */
/*   Updated: 2023/10/13 18:08:19 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*get_remain(int fd, char *remain)
{
	char	*buff;
	int		read_bytes;

	buff = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	read_bytes = 1;
	while (!ft_strchr(remain, '\n') && read_bytes != 0)
	{
		read_bytes = read(fd, buff, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[read_bytes] = '\0';
		remain = ft_strjoin_gnl(remain, buff);
	}
	free(buff);
	return (remain);
}

static char	*get_line(char *remain)
{
	char	*line;
	int		i;

	i = 0;
	if (!remain[i])
		return (NULL);
	while (remain[i] && remain[i] != '\n')
		i++;
	if (remain[i] == '\n')
		line = (char *)ft_calloc_gnl(sizeof(char), (i + 2));
	else
		line = (char *)ft_calloc_gnl(sizeof(char), (i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (remain[i] && remain[i] != '\n')
	{
		line[i] = remain[i];
		i++;
	}
	if (remain[i] == '\n')
		line[i] = remain[i];
	return (line);
}

static char	*update_remain(char *remain)
{
	char	*dest;
	size_t	i;
	size_t	j;

	i = 0;
	while (remain[i] && remain[i] != '\n')
		i++;
	if (!remain[i])
	{
		free(remain);
		return (NULL);
	}
	dest = (char *)ft_calloc_gnl(sizeof(char), (ft_strlen(remain) - i + 1));
	if (!dest)
		return (NULL);
	i++;
	j = 0;
	while (remain[i + j] != '\0')
	{
		dest[j] = remain[i + j];
		j++;
	}
	free(remain);
	return (dest);
}

char	*get_next_line(int fd)
{
	static char	*remain;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	remain = get_remain(fd, remain);
	if (!remain)
		return (NULL);
	line = get_line(remain);
	remain = update_remain(remain);
	return (line);
}
