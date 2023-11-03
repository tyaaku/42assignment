/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_use_operater.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:29:48 by taokada           #+#    #+#             */
/*   Updated: 2023/10/12 18:50:42 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	use_operater_cspdi(const char *src, va_list args, int *add)
{
	int	count;

	count = 0;
	if (src[*add + 1] == 'c')
	{
		count += ft_putchar((char)va_arg(args, int));
		*add += 2;
	}
	else if (src[*add + 1] == 's')
	{
		count += ft_putstr(va_arg(args, char *));
		*add += 2;
	}
	else if (src[*add + 1] == 'p')
	{
		count += ft_putpointer(va_arg(args, void *));
		*add += 2;
	}
	else if (src[*add + 1] == 'd' || src[*add + 1] == 'i')
	{
		count += ft_putnbr(va_arg(args, int));
		*add += 2;
	}
	return (count);
}

int	use_operater_ux(const char *src, va_list args, int *add)
{
	int	count;

	count = 0;
	if (src[*add + 1] == 'u')
	{
		count += ft_putnbr_un(va_arg(args, int));
		*add += 2;
	}
	else if (src[*add + 1] == 'x')
	{
		count += ft_putnbr_small_base(va_arg(args, int));
		*add += 2;
	}
	else if (src[*add + 1] == 'X')
	{
		count += ft_putnbr_large_base(va_arg(args, int));
		*add += 2;
	}
	else if (src[*add + 1] == '%')
	{
		count += ft_putchar('%');
		*add += 2;
	}
	return (count);
}
