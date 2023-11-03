/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:37:10 by takuya            #+#    #+#             */
/*   Updated: 2023/10/27 16:56:23 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// __attribute__((destructor))
// static void destructor() {
//     system("leaks -q a.out");
// }

int	main(int argc, char **argv)
{
	t_lst	*list_a;
	t_lst	*list_b;
	char	*dest;

	dest = strdup("start :");
	if (!check_list(argc, argv))
	{
		printf("なんかしらリストに問題あるよ\n");
		return (0);
	}
	list_a = fill_list(argc, argv);
	list_b = NULL;
	display_list(list_a, list_b, dest);
	if (is_sorted(&list_a, &list_b))
		return (0);
	
	if (ft_lstsize_ps(list_a) <= 3)
		dest = tiny_sort(&list_a,&list_b,dest);
	else if (ft_lstsize_ps(list_a) <= 6)
		dest = semi_tiny_sort(&list_a, &list_b,dest);
	//ここまでは動いてる
	else
		// dest = operator(&list_a, &list_b,dest);
		dest = quick_sort(&list_a,&list_b,dest);
	ft_lstclear_ps(&list_a);
	if (list_b != NULL)
		ft_lstclear_ps(&list_b);
	free(dest);
	return (0);
}
