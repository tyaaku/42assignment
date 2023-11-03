/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:25:16 by takuya            #+#    #+#             */
/*   Updated: 2023/10/20 22:47:29 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*do_rra(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest)
{
	t_lst	*last;
	t_lst	*sem_last;

	last = ft_lstlast(*lst_a_pp);
	sem_last = *lst_a_pp;
	while (sem_last->next != last)
		sem_last = sem_last->next;
	sem_last->next = NULL;
	last->next = *lst_a_pp;
	*lst_a_pp = last;
	dest = ft_strjoin_ps(dest, " rra");
	display_list(*lst_a_pp, *lst_b_pp, dest);
	return (dest);
}
