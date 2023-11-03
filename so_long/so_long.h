#ifndef SO_LONG_H
# define SO_LONG_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <mlx.h>


typedef struct s_img
{
	void *img;
	int width;
	int height;
	int x;
	int y;
}	t_img;

typedef struct s_mapinfo
{
	char **map;
	int map_height;
	int move_count;
	size_t feed_count;
	t_img floor;
	t_img wall;
	t_img feed;
	t_img exit;
	t_img player;
}	t_mapi;

typedef struct s_vars {
    void *mlx;
    void *win;
	t_mapi *map_info;
} t_vars;

void get_image(t_mapi *map, void *mlx);
void	display_map(t_vars vars);
char	**get_map(void);
// int move_player(int keycode, void *vars_);
void	free_all(t_vars *vars_);
size_t count_feed(char **map,int map_hight);
void get_player_location(t_mapi *map_info);
int	event_control(int keycode, void *vars_);



#endif 