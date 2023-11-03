/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:06:57 by taokada           #+#    #+#             */
/*   Updated: 2023/10/06 15:56:22 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int		len;
	char	*null_case;

	null_case = "(null)";
	if (s == NULL)
	{
		len = ft_strlen(null_case);
		write(1, null_case, len);
		return (len);
	}
	len = ft_strlen(s);
	write(1, s, len);
	return (len);
}
