/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:14:58 by taokada           #+#    #+#             */
/*   Updated: 2023/10/03 15:52:27 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	support_memmove1(unsigned char *dest_c, const unsigned char *src_c,
		size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dest_c[i] = src_c[i];
		i++;
	}
}

void	support_memmove2(unsigned char *dest_c, const unsigned char *src_c,
		size_t len)
{
	size_t	i;

	i = len;
	while (i > 0)
	{
		i--;
		dest_c[i] = src_c[i];
	}
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*dest_c;
	const unsigned char	*src_c;

	dest_c = dest;
	src_c = src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest_c <= src_c || dest_c >= (src_c + len))
		support_memmove1(dest_c, src_c, len);
	else
		support_memmove2(dest_c, src_c, len);
	return ((void *)dest_c);
}
