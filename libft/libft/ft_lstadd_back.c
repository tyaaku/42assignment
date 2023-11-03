/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:07:59 by takuya            #+#    #+#             */
/*   Updated: 2023/10/04 01:42:34 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst_pp, t_list *new_p)
{
	t_list	*tmp_p;

	if (lst_pp == NULL || new_p == NULL)
		return ;
	if (*lst_pp == NULL)
	{
		*lst_pp = new_p;
		return ;
	}
	tmp_p = ft_lstlast(*lst_pp);
	tmp_p->next = new_p;
}
