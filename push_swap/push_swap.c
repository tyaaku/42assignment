/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:55:59 by takuya            #+#    #+#             */
/*   Updated: 2023/10/19 16:55:51 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_pivot(t_lst *lst_a_pp) //クイックソートで分割するためのやつ
{
	// long long result;
	// int count;
	// t_lst *tmp;
	// if (lst_a_pp == NULL)
	// 	return (0);
	// result = 0;
	// count = 0;
	// tmp = lst_a_pp;
	// while (tmp != NULL)
	// {
	// 	result += (long)tmp->nbr;
	// 	count++;
	// 	tmp = tmp->next;
	// }
	// if (count == 0 || result == 0)
		return (0); //エラー処理
	// return (result / count);
}

void	push_swap(t_lst *lst_a_pp, t_lst *lst_b_pp)
{
	// int		pivot;
	// t_lst	*tmp;
	// int		size;
	// int		i;

	// i = 0;
	// pivot = get_pivot(lst_a_pp);
	// size = ft_lstsize_ps(lst_a_pp);
	// tmp = lst_a_pp;
	// while (i < size || tmp != NULL)
	// {
	// 	if (tmp->nbr >= pivot)
	// 		do_pb(&lst_a_pp, &lst_b_pp);
	// 	// else
	// 	// 	do_ra(lst_a_pp);
	// 	i++;
	// 	tmp = tmp->next;
	// 	display_list(&lst_a_pp, &lst_b_pp);
	// }
}
