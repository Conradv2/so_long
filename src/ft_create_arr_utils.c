/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:00:34 by conradv2          #+#    #+#             */
/*   Updated: 2025/03/24 21:00:35 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_get_col_row(t_map *map)
{
	int	tmp_column;

	tmp_column = 0;
	while (1)
	{
		map->line = get_next_line(map->fd_map);
		if (map->line == NULL)
			break ;
		map->column = ft_strlen(map->line) - 1;
		if (tmp_column == 0)
			tmp_column = map->column;
		map->row++;
		free(map->line);
	}
	ft_printf("map->column = %d\n", map->column);
	ft_printf("tmp_column = %d\n", tmp_column);
}

void	ft_malloc_check(t_map *map)
{
	int	j;

	j = 0;
	if (map->map_arr[map->i] == NULL)
	{
		while (j++ < map->i)
			free(map->map_arr[j]);
		free (map->map_arr);
		exit (1);
	}
}

void	ft_map_init(t_map *map)
{
	map->i = 0;
	map->row = 0;
	map->fd_map = open("maps/map.ber", O_RDONLY);
	if (map->fd_map < 0)
	{
		perror("Error while loading a map...");
		exit(1);
	}
}
