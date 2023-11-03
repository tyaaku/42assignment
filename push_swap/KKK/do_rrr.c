/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:30:23 by takuya            #+#    #+#             */
/*   Updated: 2023/10/20 22:46:26 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*do_rrr(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest)
{
	dest = do_rra(lst_a_pp, lst_b_pp, dest);
	dest = do_rrb(lst_a_pp, lst_b_pp, dest);
	dest = ft_strjoin_ps(dest, " rrr");
	display_list(*lst_a_pp, *lst_b_pp, dest);
	return (dest);
}
