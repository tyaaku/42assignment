/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:35:17 by takuya            #+#    #+#             */
/*   Updated: 2023/10/19 22:58:46 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_lst **lst_a_pp, t_lst **lst_b_pp)
{
	int		pre_nbr;
	t_lst	*tmp;

	if (*lst_b_pp != NULL)
	{
		printf("リストBに残っています。\n");
		return (0);
	}
	pre_nbr = INT_MIN;
	tmp = *lst_a_pp;
	while (tmp != NULL)
	{
		if (pre_nbr > tmp->nbr)
		{
			printf("ソートされていません。\n");
			return (0);
		}
		pre_nbr = tmp->nbr;
		tmp = tmp->next;
	}
	printf("ちゃんとソートされてるっぽい\n");
	return (1);
}
