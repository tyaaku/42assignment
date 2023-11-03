/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:17:52 by takuya            #+#    #+#             */
/*   Updated: 2023/10/04 01:48:04 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*dest_p;

	dest_p = (t_list *)malloc(sizeof(t_list));
	if (dest_p == NULL)
		return (NULL);
	dest_p->content = content;
	dest_p->next = NULL;
	return (dest_p);
}
