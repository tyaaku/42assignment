/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:57:31 by takuya            #+#    #+#             */
/*   Updated: 2023/10/27 16:56:18 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*do_ra(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest)
{
	t_lst	*last;
	t_lst	*tmp;
	
	tmp = *lst_a_pp;
	last = ft_lstlast(*lst_a_pp);
	last->next = tmp;
	*lst_a_pp = tmp->next;
	tmp->next = NULL;
	dest = ft_strjoin_ps(dest, " ra");
	display_list(*lst_a_pp, *lst_b_pp, dest);
	return (dest);
}
