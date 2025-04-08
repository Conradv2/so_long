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
#include "ft_create_arr_utils.h"

void	ft_fill_arr(t_game *game)
{
	game->map.j = 0;
	ft_map_init(&game->map);
	game->map.i = 0;
	while (1)
	{
		game->map.line = get_next_line(game->map.fd_map);
		if (game->map.line == NULL)
			break ;
		game->map.j = 0;
		while (game->map.j < game->map.column)
		{
			game->map.map_arr
			[game->map.i]
			[game->map.j] = game->map.line[game->map.j];
			game->map.j++;
		}
		game->map.i++;
		free(game->map.line);
	}
	close(game->map.fd_map);
}
// game->map.map_arr[game->map.row - 1][game->map.column - 1] = '\0';
