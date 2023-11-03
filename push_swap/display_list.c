/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:49:55 by taokada           #+#    #+#             */
/*   Updated: 2023/10/28 20:05:00 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display_list(t_lst *lst_a, t_lst *lst_b, char *dest)
{
	system("clear");
	printf("-----------------\n");
	printf("a | b\n");
	printf("______\n");
	while (lst_a != NULL || lst_b != NULL)
	{
		if (lst_a != NULL)
		{
			printf("%d:%d", lst_a->nbr,lst_a->assyuku_zahyou);
			lst_a = lst_a->next;
		}
		else
			printf("  ");
		printf(" | ");
		if (lst_b != NULL)
		{
			printf("%d:%d", lst_b->nbr,lst_b->assyuku_zahyou);
			lst_b = lst_b->next;
		}
		else
			printf(" ");
		printf("\n");
	}
	printf("-----------------\n");
	printf("%s\n", dest);
	usleep(0.2 * 1000000);
}
