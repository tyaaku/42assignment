/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 07:18:11 by takuya            #+#    #+#             */
/*   Updated: 2023/10/27 13:04:05 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	zurasu(int *num_box, int count, int i)
{
    int tmp;
    
	while (count > i)
	{
        
		tmp = num_box[count];
        num_box[count] = num_box[count - 1];
        num_box[count - 1] = tmp;
		count--;
	}
}

void	put_assyuku_zahyou(t_lst **dest_pp, int *num_box, int size)
{
	t_lst	*tmp;
	int		i;

	tmp = *dest_pp;
	while (tmp != NULL)
	{
		i = 0;
		while ((num_box[i] != tmp->nbr) && i < size)
			i++;
		tmp->assyuku_zahyou = i;
		tmp = tmp->next;
	}
}

void	get_assyuku_zahyou(t_lst **dest_pp)
{
	t_lst	*current;
	int		*num_box;
	int		size;
	int		i;
	int		count;

	count = 0;
	current = *dest_pp;
	size = ft_lstsize_ps(*dest_pp);
	num_box = (int *)calloc(size + 1, sizeof(int));
	if (num_box == NULL)
		return ;
	while (count < size)
	{
		i = 0;
		while (current->nbr > num_box[i] && num_box[i] != 0)
			i++;
		if (i != count)
			zurasu(num_box, count, i);
		num_box[i] = current->nbr;
		count++;
		current = current->next;
	}
	put_assyuku_zahyou(dest_pp, num_box, size);
	free(num_box);
}
