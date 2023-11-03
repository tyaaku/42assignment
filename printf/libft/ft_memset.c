/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:56:03 by taokada           #+#    #+#             */
/*   Updated: 2023/10/03 15:53:41 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int chr, size_t len)
{
	size_t	i;
	char	*s_c;

	i = 0;
	s_c = s;
	while (i < len)
	{
		s_c[i] = chr;
		i++;
	}
	return ((void *)s_c);
}
