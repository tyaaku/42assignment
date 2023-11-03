/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:00:11 by takuya            #+#    #+#             */
/*   Updated: 2023/11/03 10:01:27 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	display_map(t_vars vars)
{
	int	i;
	int	j;

	i = 0;
	
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			mlx_put_image_to_window(vars.mlx, vars.win, vars.map_info->floor.img, j * 32, i * 32);
			if(vars.map_info->map[i][j] == '1')
			{
				mlx_put_image_to_window(vars.mlx, vars.win, vars.map_info->wall.img, j * 32, i * 32);
			}
			if (vars.map_info->map[i][j] == 'E')
			{
				mlx_put_image_to_window(vars.mlx, vars.win, vars.map_info->exit.img, j * 32, i * 32);
			}
			if (vars.map_info->map[i][j] == 'C')
			{
				mlx_put_image_to_window(vars.mlx, vars.win, vars.map_info->feed.img, j * 32, i * 32);
			}
			if (i == vars.map_info->player.y && j == vars.map_info->player.x)
			{
				mlx_put_image_to_window(vars.mlx, vars.win, vars.map_info->player.img, j * 32, i * 32);
			}
			j++;
		}
		i++;
	}
}
