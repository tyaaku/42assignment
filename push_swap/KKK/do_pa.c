/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:24:57 by takuya            #+#    #+#             */
/*   Updated: 2023/10/22 19:48:55 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*do_pa(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest)
{
	t_lst	*b_next;
	t_lst	*tmp;

	if (*lst_b_pp != NULL)
	{
		b_next = (*lst_b_pp)->next;
		tmp = *lst_b_pp;
		tmp->next = *lst_a_pp;
		*lst_a_pp = tmp;
		*lst_b_pp = b_next;
		dest = ft_strjoin_ps(dest, " pa");
	}
	display_list(*lst_a_pp, *lst_b_pp, dest);
	return (dest);
}
