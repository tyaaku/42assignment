/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:36:15 by takuya            #+#    #+#             */
/*   Updated: 2023/10/28 20:04:40 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*put_under_a(t_lst **list_a, t_lst **list_b, char *dest)
{
	while (*list_b != NULL)
	{
		dest = do_pa(list_a, list_b, dest);
		dest = do_ra(list_a, list_b, dest);
	}
	return (dest);
}

// list_bが６以下になるまでlist_aに半分をpaする
static char	*second_step(t_lst **list_a, t_lst **list_b, char *dest)
{
	int		size;
	int		count;
	int		max;
	int		min;
	int		i;
	t_lst	*tmp;

	size = ft_lstsize_ps(*list_b);
	tmp = *list_b;
	i = 0;
	min = INT_MAX;
	max = INT_MIN;
	while (i < size)
	{
		if (tmp->assyuku_zahyou > max)
			max = tmp->assyuku_zahyou;
		if (tmp->assyuku_zahyou < min)
			min = tmp->assyuku_zahyou;
		tmp = tmp->next;
		i++;
	}
	count = 0;
	while (count < size / 2)
	{
		if ((*list_b)->assyuku_zahyou * 2 > (max + min))
		{
			dest = do_pa(list_a, list_b, dest);
			count++;
		}
		else
		{
			dest = do_rb(list_a, list_b, dest);
		}
	}
	return (dest);
}

//半分より小さいやつを全部bにおくる
static char	*first_step(t_lst **list_a, t_lst **list_b, char *dest, int size)
{
	int		count;
	int		i;
	int		min;
	int		max;
	t_lst	*tmp;

	tmp = *list_a;
	i = 0;
	min = INT_MAX;
	max = INT_MIN;
	while (i < size)
	{
		if (tmp->assyuku_zahyou > max)
			max = tmp->assyuku_zahyou;
		if (tmp->assyuku_zahyou < min)
			min = tmp->assyuku_zahyou;
		tmp = tmp->next;
		i++;
	}
	count = 0;
	while (count < size - (size / 2))
	{
		if ((*list_a)->assyuku_zahyou * 2 <= (max + min))
		{
			dest = do_pb(list_a, list_b, dest);
			count++;
		}
		else
		{
			dest = do_ra(list_a, list_b, dest);
		}
	}
	return (dest);
}

void amattayatu(t_lst **list_a, t_lst **list_b, char **dest, int size)
{
	int i;

	i = 0;
	// printf("あまり\n");
	// printf("今のsize:%d\n",size);
	
	while(i < size)
	{
		*dest = do_pb(list_a, list_b, *dest);
		i ++;
	}
	sample(list_a, list_b, dest, size);
	if(size < 3)
		return ;
	// amattayatu(list_a, list_b, dest, size / 2);
	return ;
}

void	sample(t_lst **list_a, t_lst **list_b, char **dest, int size)
{
	int	i;

	// printf("メイン\n");
	// printf("今のsize:%d\n",size);
	if (size < 7)
	{
		if (ft_lstsize_ps(*list_b) <= 3)
		{
			*dest = tiny_sort_r(list_a, list_b, *dest);
		}
		else
		{
			*dest = semi_tiny_sort_r(list_a, list_b, *dest);
		}
		*dest = put_under_a(list_a, list_b, *dest);
		return ;
	}
	if (*list_b == NULL)
	{
		*dest = first_step(list_a, list_b, *dest, size);
	}
	else
	{
		*dest = second_step(list_a, list_b, *dest);
	}
	sample(list_a, list_b, dest, (size - size / 2));
	amattayatu(list_a, list_b, dest, size / 2);
	return ;
}

char	*quick_sort(t_lst **list_a, t_lst **list_b, char *dest)
{
	int	size;

	size = ft_lstsize_ps(*list_a);
	sample(list_a, list_b, &dest, size);

	return (dest);
}
