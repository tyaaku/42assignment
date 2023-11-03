/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:43:55 by takuya            #+#    #+#             */
/*   Updated: 2023/10/22 19:49:14 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*do_pb(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest)
{
	t_lst	*a_next;
	t_lst	*tmp;

	if (*lst_a_pp != NULL)
	{
		a_next = (*lst_a_pp)->next;
		tmp = *lst_a_pp;
		tmp->next = *lst_b_pp;
		*lst_b_pp = tmp;
		*lst_a_pp = a_next;
		dest = ft_strjoin_ps(dest, " pb");
	}
	display_list(*lst_a_pp, *lst_b_pp, dest);
	return (dest);
}
