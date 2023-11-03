/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   semi_tiny_sort_r.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:11:48 by takuya            #+#    #+#             */
/*   Updated: 2023/10/28 19:52:10 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*do_r(t_lst **list_a_pp, t_lst **list_b_pp, int do_count,
		char *dest)
{
	while (do_count < 0)
	{
		dest = do_rrb(list_a_pp,list_b_pp,dest);
		do_count++;
	}
	while (do_count > 0)
	{
		dest = do_rb(list_a_pp,list_b_pp,dest);
		do_count--;
	}
	return (dest);
}

static char	*min_push(t_lst **list_a_pp, t_lst **list_b_pp, char *dest)
{
	int		min;
	int		count;
	int		do_count;
	t_lst	*tmp;

	min = INT_MAX;
	count = 0;
	tmp = *list_b_pp;
	while (tmp != NULL)
	{
		if (tmp->assyuku_zahyou < min)
		{
			min = tmp->assyuku_zahyou;
			do_count = count;
		}
		count++;
		tmp = tmp->next;
	}
	if (do_count * 2 + 1 > ft_lstsize_ps(*list_b_pp))
		do_count -= ft_lstsize_ps(*list_b_pp);
	dest = do_r(list_a_pp, list_b_pp, do_count, dest);
	dest = do_pa(list_a_pp, list_b_pp, dest);
	return (dest);
}

char	*semi_tiny_sort_r(t_lst **list_a_pp, t_lst **list_b_pp, char *dest)
{
	int	size;
	int	i;

	size = ft_lstsize_ps(*list_b_pp);
	size -= 3;
	i = 0;
	while (i < size)
	{
		dest = min_push(list_a_pp, list_b_pp, dest);
		i++;
	}
	dest = tiny_sort_r(list_a_pp, list_b_pp, dest);
	while (size > 0)
	{
		dest = do_pb(list_a_pp, list_b_pp, dest);
		size--;
	}
	return (dest);
}
