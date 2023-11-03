/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:01:30 by takuya            #+#    #+#             */
/*   Updated: 2023/10/20 22:50:00 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*do_ss(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest)
{
	dest = do_sa(lst_a_pp, lst_b_pp, dest);
	dest = do_sb(lst_a_pp, lst_b_pp, dest);
	dest = ft_strjoin_ps(dest, " ss");
	display_list(*lst_a_pp, *lst_b_pp, dest);
	return (dest);
}
