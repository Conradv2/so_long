/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:06:07 by conradv2          #+#    #+#             */
/*   Updated: 2025/03/24 22:06:08 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**ft_fill_arr(t_map *map)
{
	int	j;

	j = 0;
	map->fd_map = open("map.ber", O_RDONLY);
	map->i = 0;
	while ((map->line = get_next_line(map->fd_map)) != NULL)
	{
		j = 0;
		while (j < map->column)
		{
			map->map_arr[map->i][j] = map->line[j];
			j++;
		}
		map->i++;
		free(map->line);
	}
	return (map->map_arr);
}
