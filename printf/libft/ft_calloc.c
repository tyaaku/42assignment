/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:45:31 by takuya            #+#    #+#             */
/*   Updated: 2023/10/03 15:46:12 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*dest;

	if (n == 0 || size == 0)
	{
		n = 1;
		size = 1;
	}
	if (INT_MAX / size < n)
		return (NULL);
	dest = (void *)malloc(n * size);
	if (dest == NULL)
		return (NULL);
	ft_bzero(dest, n * size);
	return (dest);
}
