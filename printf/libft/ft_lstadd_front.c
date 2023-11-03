/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:27:06 by takuya            #+#    #+#             */
/*   Updated: 2023/10/04 01:56:23 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst_pp, t_list *new_p)
{
	if (lst_pp == NULL || new_p == NULL)
		return ;
	(*new_p).next = *lst_pp;
	*lst_pp = new_p;
}
