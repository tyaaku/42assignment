/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:51:41 by taokada           #+#    #+#             */
/*   Updated: 2023/10/01 18:05:41 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *dest, const char *src, size_t size)
{
	size_t	dest_add;
	size_t	i;

	dest_add = 0;
	if (!dest && size == 0)
		return (NULL);
	if (!src[0])
		return ((char *)dest);
	while (dest[dest_add] != '\0')
	{
		i = 0;
		while (dest[dest_add + i] == src[i] && dest_add + i < size)
		{
			i++;
			if (src[i] == '\0')
			{
				if (dest_add < size || size < 0)
					return ((char *)&dest[dest_add]);
				if (dest_add > size || size == 0)
					return (0);
			}
		}
		dest_add++;
	}
	return (0);
}
