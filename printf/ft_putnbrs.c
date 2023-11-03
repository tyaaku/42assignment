/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:01:02 by taokada           #+#    #+#             */
/*   Updated: 2023/10/12 18:50:07 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int i)
{
	char	*str;
	int		len;

	str = ft_itoa(i);
	len = ft_strlen(str);
	write(1, str, len);
	free(str);
	return (len);
}

int	ft_putnbr_un(unsigned int i)
{
	char	*base;
	char	*str;
	int		len;

	base = "0123456789";
	str = ft_itoa_base_un(i, base);
	len = ft_strlen(str);
	write(1, str, len);
	free(str);
	return (len);
}

int	ft_putnbr_large_base(unsigned int i)
{
	char	*base;
	char	*str;
	int		len;

	base = "0123456789ABCDEF";
	str = ft_itoa_base_un(i, base);
	len = ft_strlen(str);
	write(1, str, len);
	free(str);
	return (len);
}

int	ft_putnbr_small_base(unsigned int i)
{
	char	*base;
	char	*str;
	int		len;

	base = "0123456789abcdef";
	str = ft_itoa_base_un(i, base);
	len = ft_strlen(str);
	write(1, str, len);
	free(str);
	return (len);
}

int	ft_putpointer(void *ptr)
{
	char	*base;
	char	*prefix;
	char	*str;
	int		len;

	base = "0123456789abcdef";
	prefix = "0x";
	str = ft_itoa_base_un((unsigned long long)ptr, base);
	write(1, prefix, 2);
	len = ft_strlen(prefix) + ft_strlen(str);
	write(1, str, ft_strlen(str));
	free(str);
	return (len);
}
