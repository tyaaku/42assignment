/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:32:25 by takuya            #+#    #+#             */
/*   Updated: 2023/11/02 22:09:43 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**get_map(void)
{
	char	**map;
	int		i;

	i = 0;
	map = (char **)malloc(sizeof(char *) * 10);
	if (map == NULL)
		return (NULL);
	while (i < 10)
	{
		map[i] = (char *)calloc(sizeof(char), 11);
		if (map[i] == NULL)
		{
			while (i >= 0)
			{
				free(map[i]);
				i--;
			}
		}
		i++;
	}
	strcpy(map[0],"1111111111");
	strcpy(map[1],"10P0000001");
	strcpy(map[2],"100000C001");
	strcpy(map[3],"1111100001");
	strcpy(map[4],"10C0100001");
	strcpy(map[5],"1000100001");
	strcpy(map[6],"1000100C01");
	strcpy(map[7],"1000000001");
	strcpy(map[8],"100E000001");
	strcpy(map[9],"1111111111");
	return (map);
}