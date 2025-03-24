/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_arr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:42:59 by conradv2          #+#    #+#             */
/*   Updated: 2025/03/24 20:43:01 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "ft_create_arr_utils.h"

char	**ft_create_arr(t_map *map)
{
	map->i = 0;
	map->row = 0;
	map->fd_map = open("maps/map.ber", O_RDONLY);
	if (map->fd_map < 0)
	{
		perror("Error while loading a map...");
		exit(1);
	}
	ft_get_col_row(map);
	map->map_arr = (char **)malloc(map->row * sizeof(char *));
	if (map->map_arr == NULL)
		exit (1);
	while (map->i++ < map->row)
	{
		map->map_arr[map->i] = (char *)malloc(map->column * sizeof(char));
		ft_malloc_check (map);
	}
	close(map->fd_map);
	return (map->map_arr);
}
// i mean it works like i wanted it to work
