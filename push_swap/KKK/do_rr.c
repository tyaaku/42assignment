/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:23:30 by takuya            #+#    #+#             */
/*   Updated: 2023/10/20 22:41:08 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*do_rr(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest)
{
	dest = do_ra(lst_a_pp, lst_b_pp, dest);
	dest = do_rb(lst_a_pp, lst_b_pp, dest);
	dest = ft_strjoin_ps(dest, " rr");
	display_list(*lst_a_pp, *lst_b_pp, dest);
	return (dest);
}
