/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:37:11 by takuya            #+#    #+#             */
/*   Updated: 2023/10/01 17:40:25 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	get_ketasu(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		ketasu;
	char	*dest;

	ketasu = get_ketasu(n);
	dest = (char *)malloc((ketasu + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_bzero(dest, ketasu + 1);
	if (n == 0)
		dest[0] = '0';
	if (n < 0)
		dest[0] = '-';
	while (n != 0 && ketasu > 0)
	{
		dest[ketasu - 1] = get_abs(n % 10) + '0';
		n /= 10;
		ketasu--;
	}
	return (dest);
}
