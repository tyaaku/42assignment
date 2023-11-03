/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:57:47 by takuya            #+#    #+#             */
/*   Updated: 2023/10/04 01:45:09 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst_p, void (*f)(void *))
{
	if (f == NULL)
		return ;
	while (lst_p != NULL)
	{
		f((*lst_p).content);
		lst_p = (*lst_p).next;
	}
}
