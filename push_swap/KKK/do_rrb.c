/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:29:34 by takuya            #+#    #+#             */
/*   Updated: 2023/10/20 22:45:07 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*do_rrb(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest)
{
	t_lst	*last;
	t_lst	*sem_last;

	last = ft_lstlast(*lst_b_pp);
	sem_last = *lst_b_pp;
	while (sem_last->next != last)
		sem_last = sem_last->next;
	sem_last->next = NULL;
	last->next = *lst_b_pp;
	*lst_b_pp = last;
	dest = ft_strjoin_ps(dest, " rrb");
	display_list(*lst_a_pp, *lst_b_pp, dest);
	return (dest);
}
