/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:03:00 by takuya            #+#    #+#             */
/*   Updated: 2023/10/04 02:07:17 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strldup(const char *src, int len)
{
	char	*dest;
	int		i;

	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	free_all(char **dest, int i)
{
	while (i >= 0)
	{
		free(dest[i]);
		i--;
	}
	free(dest);
}

int	get_str_len(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	sub_split(const char *s, char c, char **dest, int i)
{
	int	start;
	int	end;

	start = 0;
	end = 0;
	while (end <= get_str_len(s))
	{
		if (s[end] == c || s[end] == '\0')
		{
			if (end - start > 0)
			{
				dest[i] = ft_strldup(&s[start], end - start);
				if (dest[i] == NULL)
				{
					free_all(dest, i);
					return ;
				}
				i++;
			}
			start = end + 1;
		}
		end++;
	}
	dest[i] = NULL;
}

char	**ft_split(const char *s, char c)
{
	char	**dest;
	int		i;
	int		count;

	if (s == NULL)
		return (NULL);
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	dest = (char **)malloc((count + 1) * sizeof(char *));
	if (dest == NULL)
		return (NULL);
	sub_split(s, c, dest, 0);
	return (dest);
}
