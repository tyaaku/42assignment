/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:26:11 by takuya            #+#    #+#             */
/*   Updated: 2023/10/22 14:59:23 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*do_sa(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest)
{
	int		count;
	t_lst	*second;
	t_lst	*third;

	printf("チェック３\n");
	count = ft_lstsize_ps(*lst_a_pp);
	if (count < 2)
		return (NULL);
	second = (*lst_a_pp)->next;
	third = (*lst_a_pp)->next->next;
	(*lst_a_pp)->next = third;
	second->next = *lst_a_pp;
	*lst_a_pp = second;
	printf("チェック4\n");
	dest = ft_strjoin_ps(dest, " sa");
	printf("チェック5\n");
	display_list(*lst_a_pp, *lst_b_pp, dest);
	return (dest);
}
