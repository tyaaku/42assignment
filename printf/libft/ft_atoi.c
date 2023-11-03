/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 00:58:28 by takuya            #+#    #+#             */
/*   Updated: 2023/10/02 10:19:36 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == ' ')
		return (1);
	else if (c == '\t')
		return (1);
	else if (c == '\v')
		return (1);
	else if (c == '\n')
		return (1);
	else if (c == '\f')
		return (1);
	else if (c == '\r')
		return (1);
	else
		return (0);
}

const char	*move_to_nbr(const char *str, int *pm)
{
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		*pm = -1;
	if (*str == '+' || *str == '-')
		str++;
	return (str);
}

int	ft_atoi(const char *str)
{
	long	result;
	int		pm;

	result = 0;
	pm = 1;
	str = move_to_nbr(str, &pm);
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		if (pm == -1)
		{
			if (result < (LONG_MIN + (*str - '0')) / 10)
				return ((int)LONG_MIN);
			result = result * 10 - (*str - '0');
		}
		else
		{
			if (result > (LONG_MAX - (*str - '0')) / 10)
				return ((int)LONG_MAX);
			result = result * 10 + (*str - '0');
		}
		str++;
	}
	return ((int)result);
}
