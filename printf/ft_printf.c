/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:23:11 by taokada           #+#    #+#             */
/*   Updated: 2023/10/06 15:48:48 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	shorten_printf(const char *src, int *count, int *add)
{
	write(1, &src[*add], 1);
	*count += 1;
	*add += 1;
}

int	ft_printf(const char *src, ...)
{
	int		add;
	va_list	args;
	int		count;

	count = 0;
	add = 0;
	va_start(args, src);
	while (src[add] != '\0')
	{
		if (src[add] == '%')
		{
			if (is_ope_set(src[add + 1]) != 1)
				return (count);
			if (is_cspdi(src[add + 1]))
				count += use_operater_cspdi(src, args, &add);
			else if (is_uxper(src[add + 1]))
				count += use_operater_ux(src, args, &add);
		}
		else
			shorten_printf(src, &count, &add);
	}
	return (va_end(args), count);
}
