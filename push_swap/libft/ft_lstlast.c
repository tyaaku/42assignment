/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:02:45 by takuya            #+#    #+#             */
/*   Updated: 2023/10/04 01:45:46 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst_p)
{
	t_list	*tmp_p;

	if (lst_p == NULL)
		return (NULL);
	while (lst_p != NULL)
	{
		tmp_p = lst_p;
		lst_p = lst_p->next;
	}
	return (tmp_p);
}
