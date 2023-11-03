/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:03:01 by taokada           #+#    #+#             */
/*   Updated: 2023/10/28 16:23:02 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst	*fill_list(int argc, char **argv)
{
	int		i;
	t_lst	*dest;
	t_lst	*tmp;
	t_lst	*previous_one;

	i = 1;
	dest = ft_lstnew_ps(ft_atoi(argv[i]));
	dest->prev = NULL;
	i++;
	previous_one = NULL;
	tmp = dest;
	while (i < argc)
	{
		tmp->next = ft_lstnew_ps(ft_atoi(argv[i]));
		previous_one = tmp;
		tmp = tmp->next;
		tmp->prev = previous_one;
		i++;
	}
	get_assyuku_zahyou(&dest);
	return (dest);
}
