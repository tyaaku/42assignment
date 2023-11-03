/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:53:32 by takuya            #+#    #+#             */
/*   Updated: 2023/10/04 02:15:59 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst_pp, void (*del)(void *))
{
	t_list	*tmp_p;

	if (lst_pp == NULL || del == NULL)
		return ;
	while (*lst_pp != NULL)
	{
		tmp_p = *lst_pp;
		*lst_pp = (*lst_pp)->next;
		del(tmp_p->content);
		free(tmp_p);
	}
	*lst_pp = NULL;
}
