/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:35:17 by takuya            #+#    #+#             */
/*   Updated: 2023/10/04 02:00:11 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst_p, void (*del)(void *))
{
	if (lst_p == NULL || del == NULL)
		return ;
	del(lst_p->content);
	free(lst_p);
}
