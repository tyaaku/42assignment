/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:42:55 by taokada           #+#    #+#             */
/*   Updated: 2023/10/22 19:39:49 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*operator(t_lst **list_a, t_lst **list_b,char *dest)
{
	
	char	buff[64];
	int ok;

	while (1)
	{
		printf("使いたいコマンドを記入してください。\n");
		printf("qでやめる,  checkでソートされてるかをチェック\n");
		printf("記入欄：");
		scanf("%s", buff);
		system("clear");
		if (buff[0] == 'q')
			break ;
		if (strcmp(buff, "sa") == 0)
		{
			dest = do_sa(list_a,list_b,dest);
		}
		if (strcmp(buff, "sb") == 0)
		{
			dest = do_sb(list_a,list_b,dest);
		}
		if (strcmp(buff, "ss") == 0)
		{
			dest = do_ss(list_a,list_b,dest);
		}
		if (strcmp(buff, "pa") == 0)
		{
			dest = do_pa(list_a,list_b,dest);
		}
		if (strcmp(buff, "pb") == 0)
		{
			dest = do_pb(list_a,list_b,dest);
		}
		if (strcmp(buff, "ra") == 0)
		{
			dest = do_ra(list_a,list_b,dest);
		}
		if (strcmp(buff, "rb") == 0)
		{
			dest = do_rb(list_a,list_b,dest);
		}
		if (strcmp(buff, "rr") == 0)
		{
			dest = do_rr(list_a,list_b,dest);
		}
		if (strcmp(buff, "rra") == 0)
		{
			dest = do_rra(list_a,list_b,dest);
		}
		if (strcmp(buff, "rrb") == 0)
		{
			dest = do_rrb(list_a,list_b,dest);
		}
		if (strcmp(buff, "rrr") == 0)
		{
			dest = do_rrr(list_a,list_b,dest);
		}
		if (strcmp(buff, "check") == 0)
		{
			ok = is_sorted(list_a,list_b);
			printf("use:is_sorted\n");
			if (ok)
				return (dest);
		}
	}
	return (dest);
}
