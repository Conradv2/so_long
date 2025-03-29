/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 22:51:53 by conradv2          #+#    #+#             */
/*   Updated: 2025/03/26 22:51:55 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_init_exit(t_game *game)
{
	int	count;

	count = 0;
	game->map.i = 0;
	while (game->map.i < game->map.row)
	{
		game->map.j = 0;
		while (game->map.j < game->map.column)
		{
			if (game->map.map_arr[game->map.i][game->map.j] == 'E')
			{
				game->exit.x = game->map.j;
				game->exit.y = game->map.i;
				game->map.map_arr[game->map.i][game->map.j] = '0';
				count++;
			}
			game->map.j++;
		}
		game->map.i++;
	}
	return (count);
}

void	ft_check_map(t_game *game)
{
	if (ft_init_player(game) != 1)
	{
		perror("There is too much or not a single player...");
		ft_free_arr(game);
		exit(1);
	}
	if (!(ft_init_collectible(game) >= 1))
	{
		perror("There is too little collectibles to open the exit...");
		ft_free_arr(game);
		free(game->collectible);
		exit(1);
	}
	if (ft_init_exit(game) != 1)
	{
		perror("There is too much or not a single exit...");
		ft_free_arr(game);
		free(game->collectible);
		exit(1);
	}
}
