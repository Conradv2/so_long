/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:43:07 by conradv2          #+#    #+#             */
/*   Updated: 2025/03/24 20:43:08 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_init_player(t_game *game)
{
	int	player_count;

	game->map.i = 0;
	player_count = 0;
	while (game->map.i < game->map.row)
	{
		game->map.j = 0;
		while (game->map.j < game->map.column)
		{
			if (game->map.map_arr[game->map.i][game->map.j] == 'P')
			{
				game->player.y = game->map.i;
				game->player.x = game->map.j;
				ft_printf("Player found!\n");
				player_count++;
			}
			game->map.j++;
		}
		game->map.i++;
	}
	if (player_count != 1)
	{
		perror("There is too much or not a single player!...");
		ft_free_arr(game);
		exit(1);
	}
}

void	ft_handle_map(t_game *game)
{
	ft_create_arr(game);
	ft_init_player(game);
	// ft_check_map(game);
	ft_print_arr(game);
}
