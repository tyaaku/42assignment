/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:01:11 by takuya            #+#    #+#             */
/*   Updated: 2023/10/20 22:40:52 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*do_rb(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest)
{
	t_lst	*last;
	t_lst	*tmp;

	tmp = *lst_b_pp;
	last = ft_lstlast(*lst_b_pp);
	last->next = tmp;
	*lst_b_pp = tmp->next;
	tmp->next = NULL;
	dest = ft_strjoin_ps(dest, " ra");
	display_list(*lst_a_pp, *lst_b_pp, dest);
	return (dest);
}
