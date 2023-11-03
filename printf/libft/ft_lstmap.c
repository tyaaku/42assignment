/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:01:44 by takuya            #+#    #+#             */
/*   Updated: 2023/10/04 01:57:40 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst_p, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst_p;

	if (f == NULL || del == NULL)
		return (NULL);
	new_lst_p = NULL;
	while (lst_p != NULL)
	{
		ft_lstadd_back(&new_lst_p, ft_lstnew(f(lst_p->content)));
		lst_p = lst_p->next;
	}
	ft_lstclear(&lst_p, del);
	return (new_lst_p);
}
