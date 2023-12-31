/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:02:22 by taokada           #+#    #+#             */
/*   Updated: 2023/10/03 15:45:40 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	ft_bzero(void *s, int n)
{
	int		i;
	char	*tky;

	i = 0;
	tky = s;
	while (i < n)
	{
		tky[i] = '\0';
		i ++;
	}
}
