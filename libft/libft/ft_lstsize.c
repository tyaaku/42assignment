/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:45:23 by takuya            #+#    #+#             */
/*   Updated: 2023/10/04 01:48:34 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst_p)
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
