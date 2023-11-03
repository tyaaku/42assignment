/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:30:56 by takuya            #+#    #+#             */
/*   Updated: 2023/11/02 22:04:22 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_all(t_vars *vars_)
{
	t_vars	*vars;

	vars = (t_vars *)vars_;
	int i = 0;
	while(i < 10)
	{
		free(vars->map_info->map[i]);
		i ++;
	}
	free(vars->map_info->map);
	mlx_clear_window(vars->mlx, vars->win);
	mlx_destroy_window(vars->mlx, vars->win);
	mlx_destroy_display(vars->mlx);
	free(vars->mlx);
	exit(0);
}