/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:53:41 by taokada           #+#    #+#             */
/*   Updated: 2023/10/27 20:58:03 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	judge_case(t_lst *dest_p)
{
	int	first;
	int	second;
	int	third;

	first = dest_p->nbr;
	second = dest_p->next->nbr;
	third = dest_p->next->next->nbr;
	if (first > second && second > third)
		return (1);
	if (first > second && second < third && first > third)
		return (2);
	if (first > second && second < third && first < third)
		return (3);
	if (first < second && second > third && first < third)
		return (4);
	if (first < second && second > third && first > third)
		return (5);
	return (0);
}

char	*tiny_sort(t_lst **list_a_pp, t_lst **list_b_pp, char *dest)
{
	int	flag;

	if (ft_lstsize_ps(*list_a_pp) == 2)
		dest = do_sa(list_a_pp,list_b_pp,dest);
	if (ft_lstsize_ps(*list_a_pp) == 3)
	{
		flag = judge_case(*list_a_pp);
		if (flag == 1)
		{
			dest = do_sa(list_a_pp,list_b_pp,dest);
			dest = do_rra(list_a_pp,list_b_pp,dest);
		}
		else if (flag == 2)
			dest = do_ra(list_a_pp,list_b_pp,dest);
		else if (flag == 3)
			dest = do_sa(list_a_pp,list_b_pp,dest);
		else if (flag == 4)
		{
			dest = do_sa(list_a_pp,list_b_pp,dest);
			dest = do_ra(list_a_pp,list_b_pp,dest);
		}
		else if (flag == 5)
			dest = do_rra(list_a_pp,list_b_pp,dest);
	}
	return (dest);
}
