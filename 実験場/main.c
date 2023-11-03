/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:33:29 by takuya            #+#    #+#             */
/*   Updated: 2023/11/03 11:41:27 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"



int	main(void)
{
	t_vars	vars;
	int		i;
	int		j;
	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 320, 320, "Born2beroot(uso)");
	vars.map_info = (t_mapi *)malloc(sizeof(t_mapi));
	vars.map_info->map = get_map();
	vars.map_info->map_height = 10;
	vars.map_info->move_count = 0;
	get_player_location(vars.map_info);
	vars.map_info->feed_count = count_feed(vars.map_info->map,vars.map_info->map_height);
	get_image(vars.map_info, vars.mlx);
	display_map(vars);
	mlx_hook(vars.win, 2, 1L << 0, event_control, &vars);
	mlx_loop(vars.mlx);
	return (0);
}
