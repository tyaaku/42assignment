/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:33:36 by takuya            #+#    #+#             */
/*   Updated: 2023/11/03 11:51:28 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

typedef struct s_loc
{
	int			x;
	int			y;
}				t_loc;

static void	update_location(t_vars *vars, t_mapi *map, int x, int y)
{
	if(map->map[map->player.y][map->player.x] != 'E')
		map->map[map->player.y][map->player.x] = '0';
	map->player.x += x;
	map->player.y += y;
	if(map->map[map->player.y][map->player.x] != 'E')
		map->map[map->player.y][map->player.x] = 'P';
    vars->map_info->move_count ++;
    printf("move count->%d\n",vars->map_info->move_count);
	mlx_clear_window(vars->mlx, vars->win);
	display_map(*vars);
}

static t_loc	change_to_loc(int keycode)//keycodeから上下左右を返す
{
	t_loc	result;

	result.x = 0;
	result.y = 0;
    
	if (keycode == 119)
	{
		result.x = 0;
		result.y = -1;
	}
	if (keycode == 97)
	{
		result.x = -1;
		result.y = 0;
	}
	if (keycode == 115)
	{
		result.x = 0;
		result.y = 1;
	}
	if (keycode == 100)
	{
		result.x = 1;
		result.y = 0;
	}
	return (result);
}

static int	event_judge(t_loc loc, t_mapi *map)
{
    if (map->map[map->player.y + loc.y][map->player.x + loc.x] == '0')
	    return (1);//普通に動く
	if (map->map[map->player.y + loc.y][map->player.x + loc.x] == 'C')
	{
		map->feed_count -= 1;
		return (2);//餌の獲得、動ける
	}
	if (map->map[map->player.y + loc.y][map->player.x + loc.x] == 'E')
	{
		if(map->feed_count == 0)
        {
            return(3);//動いた後ゲームクリア
        }
		printf("まだポーションが残っています。\n");
		return(4);//まだクリアしてないから普通に動く
	}	
	return (0);//動けないから何もしない
}

static void	move_player(int keycode, t_vars *vars)
{
	if (keycode == 119)
		update_location(vars, vars->map_info, 0, -1);
	if (keycode == 97)
		update_location(vars, vars->map_info, -1, 0);
	if (keycode == 115)
		update_location(vars, vars->map_info, 0, 1);
	if (keycode == 100)
		update_location(vars, vars->map_info, 1, 0);
}

int	event_control(int keycode, void *vars_)
{
	t_vars	*vars;
	int		event;

	vars = (t_vars *)vars_;
	if (keycode == 119 || keycode == 97 || keycode == 115 || keycode == 100)
	{
		event = event_judge(change_to_loc(keycode),vars->map_info);
		if(event == 0)
            return(0);
        move_player(keycode, vars);
        if(event == 3)
        {
			printf("-------Game Clear !!!--------\n");
			printf("           \\(^○^)/!!\n");
			printf("こんなクソゲーしてる暇あったらB2B出せ!!\n");
			printf("------------------------------\n");
            usleep(1 * 1000000);
            free_all(vars);
        }
	}
	if (keycode == 65307)
	{
		free_all(vars);
		printf("ゲームを終了します。\n");
		return (0);
	}
	else
		// printf("keycode = %d\n", keycode);
	return (0);
}
