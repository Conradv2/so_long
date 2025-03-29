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

void	ft_get_col_row(t_game *game)
{
	int	is_correct;
	int	tmp_column;

	is_correct = 0;
	tmp_column = 0;
	while (1)
	{
		game->map.line = get_next_line(game->map.fd_map);
		if (game->map.line == NULL)
			break ;
		game->map.column = ft_strlen(game->map.line) - 1;
		if (tmp_column == 0)
			tmp_column = game->map.column;
		if (tmp_column != game->map.column)
			is_correct = 1;
		game->map.row++;
		free(game->map.line);
	}
	if (is_correct == 1)
	{
		perror("Column lengths are not equal...");
		close(game->map.fd_map);
		exit(1);
	}
}

void	ft_malloc_check(t_map *map)
{

	map->j = 0;
	if (map->map_arr[map->i] == NULL)
	{
		while (map->j++ < map->i)
			free(map->map_arr[map->j]);
		free (map->map_arr);
		exit (1);
	}
}

void	ft_map_init(t_map *map)
{
	map->fd_map = open("maps/map.ber", O_RDONLY);
	if (map->fd_map < 0)
	{
		perror("Error while loading a map...");
		exit(1);
	}
}
