/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_ps.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:56:27 by takuya            #+#    #+#             */
/*   Updated: 2023/10/27 12:15:41 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize_ps(t_lst *lst_p)
{
	int	size;

	size = 0;
	while (lst_p != NULL)
	{
		size++;
		lst_p = lst_p->next;
	}
	return (size);
}

void	ft_lstclear_ps(t_lst **lst_pp)
{
	t_lst	*tmp_p;

	if (lst_pp == NULL)
		return ;
	while (*lst_pp != NULL)
	{
		tmp_p = *lst_pp;
		*lst_pp = (*lst_pp)->next;
		free(tmp_p);
	}
	*lst_pp = NULL;
}

t_lst	*ft_lstnew_ps(int content)
{
	t_lst	*dest_p;

	dest_p = (t_lst *)malloc(sizeof(t_lst));
	if (dest_p == NULL)
		return (NULL);
	dest_p->nbr = content;
	dest_p->assyuku_zahyou = -42;
	dest_p->next = NULL;
	dest_p->prev = NULL;
	return (dest_p);
}

void	ft_lstadd_front_ps(t_lst **lst_pp, t_lst *new_p)
{
	if (lst_pp == NULL || new_p == NULL)
		return ;
	(*new_p).next = *lst_pp;
	*lst_pp = new_p;
}

t_lst	*ft_lstlast(t_lst *lst_p)
{
	t_lst	*tmp_p;

	if (lst_p == NULL)
		return (NULL);
	while (lst_p != NULL)
	{
		tmp_p = lst_p;
		lst_p = lst_p->next;
	}
	return (tmp_p);
}