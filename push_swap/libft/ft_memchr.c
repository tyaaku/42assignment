/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 00:58:55 by takuya            #+#    #+#             */
/*   Updated: 2023/10/01 18:10:20 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*a;
	size_t				i;
	unsigned int		c_ex;

	a = s;
	i = 0;
	c_ex = (unsigned int)c;
	if (c_ex > 255)
		c_ex %= 256;
	while (i < n)
	{
		if (a[i] == (unsigned char)c_ex)
			return ((void *)&a[i]);
		i++;
	}
	return (0);
}
