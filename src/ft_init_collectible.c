/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_collectible.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 19:34:38 by conradv2          #+#    #+#             */
/*   Updated: 2025/03/29 19:34:39 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_collectible_arr(t_game *game, int count)
{
	game->collectible = (t_entity *)malloc(sizeof(t_entity) * count);
	if (game->collectible == NULL)
	{
		perror("ft_collectible_arr failed allocation");
		ft_free_arr(game);
		exit(1);
	}
}

int	ft_collectible_counter(t_game *game)
{
	int	count;

	count = 0;
	game->map.i = 0;
	while (game->map.i < game->map.row)
	{
		game->map.j = 0;
		while (game->map.j < game->map.column)
		{
			if (game->map.map_arr[game->map.i][game->map.j] == 'C')
			{
				count++;
			}
			game->map.j++;
		}
		game->map.i++;
	}
	return (count);
}

int	ft_init_collectible(t_game *game)
{
	int	count;

	count = ft_collectible_counter(game);
	ft_collectible_arr(game, count);
	game->map.i = 0;
	while (game->map.i < game->map.row)
	{
		game->map.j = 0;
		while (game->map.j < game->map.column)
		{
			if (game->map.map_arr[game->map.i][game->map.j] == 'C')
			{
				game->collectible[game->map.i].y = game->map.i;
				game->collectible[game->map.j].x = game->map.j;
			}
			game->map.j++;
		}
		game->map.i++;
	}
	return (count);
}
