/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct_info.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:23:32 by takuya            #+#    #+#             */
/*   Updated: 2023/11/03 11:45:58 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

size_t count_feed(char **map,int map_hight)
{
    size_t count;
    int i = 0;
    int j = 0;
    count = 0;
    while(i < map_hight)
    {
        j = 0;
        while(map[i][j] != '\0')
        {
            if(map[i][j] == 'C')
                count ++;
            j++;
        }
        i ++;
    }   
    return(count);
}

void get_player_location(t_mapi *map_info)
{
    int i = 0;
    int j = 0;
    while(i < map_info->map_height)
    {
        j = 0;
        while(map_info->map[i][j] != '\0')
        {
            if(map_info->map[i][j] == 'P')
            {
                map_info->player.x = j;
                map_info->player.y = i;
                return;
            }
            j++;
        }
        i ++;
    }
}