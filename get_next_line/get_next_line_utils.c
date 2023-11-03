/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:24:19 by taokada           #+#    #+#             */
/*   Updated: 2023/10/13 18:11:04 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	if (!c)
		return (0);
	while (c[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

void	*ft_calloc_gnl(size_t n, size_t size)
{
	char	*dest;
	size_t	i;

	if (n == 0 || size == 0)
	{
		n = 1;
		size = 1;
	}
	if (INT_MAX / size < n)
		return (NULL);
	dest = (char *)malloc(n * size);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < n * size)
	{
		dest[i] = '\0';
		i++;
	}
	return ((void *)dest);
}

char	*ft_strjoin_gnl(char *remain, char *buff)
{
	size_t	i;
	size_t	remain_len;
	size_t	buff_len;
	char	*line;

	if (remain == NULL)
		remain = (char *)ft_calloc_gnl(1, sizeof(char));
	if (remain == NULL || buff == NULL)
		return (NULL);
	i = 0;
	remain_len = ft_strlen(remain);
	buff_len = ft_strlen(buff);
	line = (char *)ft_calloc_gnl((remain_len + buff_len + 1), sizeof(char));
	if (line == NULL)
		return (NULL);
	while (i < remain_len + buff_len)
	{
		if (i < remain_len)
			line[i] = remain[i];
		else
			line[i] = buff[i - remain_len];
		i++;
	}
	free(remain);
	return (line);
}
