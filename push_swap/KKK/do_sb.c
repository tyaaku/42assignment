/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:00:53 by takuya            #+#    #+#             */
/*   Updated: 2023/10/20 22:52:11 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*do_sb(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest)
{
	int		count;
	t_lst	*second;
	t_lst	*third;

	count = ft_lstsize_ps(*lst_b_pp);
	if (count < 2)
		return (NULL);
	second = (*lst_b_pp)->next;
	third = (*lst_b_pp)->next->next;
	(*lst_b_pp)->next = third;
	second->next = *lst_b_pp;
	*lst_b_pp = second;
	dest = ft_strjoin_ps(dest, " sb");
	display_list(*lst_a_pp, *lst_b_pp, dest);
	return (dest);
}
