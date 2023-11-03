/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_un.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:35:06 by taokada           #+#    #+#             */
/*   Updated: 2023/10/12 15:58:24 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned long long	get_digit(unsigned long long i,
		unsigned long long base_nbr)
{
	unsigned long long	digit;

	digit = 0;
	if (i == 0)
		return (1);
	while (i != 0)
	{
		i /= base_nbr;
		digit++;
	}
	return (digit);
}

static void	nbr_to_str(char *dest, unsigned long long i,
		unsigned long long digit, char *base)
{
	long long	base_nbr;

	base_nbr = ft_strlen(base);
	while (digit > 0)
	{
		dest[digit - 1] = base[i % base_nbr];
		i /= base_nbr;
		digit--;
	}
}

char	*ft_itoa_base_un(unsigned long long i, char *base)
{
	unsigned long long	digit;
	char				*dest;
	unsigned long long	base_nbr;

	base_nbr = ft_strlen(base);
	digit = get_digit(i, base_nbr);
	dest = (char *)ft_calloc(digit + 1, sizeof(char));
	if (dest == NULL)
		return (NULL);
	else
		nbr_to_str(dest, i, digit, base);
	return (dest);
}
