/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:19:13 by takuya            #+#    #+#             */
/*   Updated: 2023/11/02 16:19:36 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void get_image(t_mapi *map, void *mlx)
{
	map->floor.img = mlx_xpm_file_to_image(mlx, "map_image/floor.xpm", &map->floor.width, &map->floor.height);
	map->exit.img = mlx_xpm_file_to_image(mlx, "map_image/exit.xpm", &map->exit.width, &map->exit.height);
	map->wall.img = mlx_xpm_file_to_image(mlx, "map_image/wall.xpm", &map->wall.width, &map->wall.height);
	map->player.img = mlx_xpm_file_to_image(mlx, "map_image/player.xpm", &map->player.width, &map->player.height);
	map->feed.img = mlx_xpm_file_to_image(mlx, "map_image/sprite.xpm", &map->feed.width, &map->feed.height);
    return;
}