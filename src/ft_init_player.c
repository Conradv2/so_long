/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:18:54 by conradv2          #+#    #+#             */
/*   Updated: 2025/03/29 18:18:55 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_init_player(t_game *game)
{
	int	count;

	count = 0;
	game->map.i = 0;
	while (game->map.i < game->map.row)
	{
		game->map.j = 0;
		while (game->map.j < game->map.column)
		{
			if (game->map.map_arr[game->map.i][game->map.j] == 'P')
			{
				game->player.y = game->map.i;
				game->player.x = game->map.j;
				count++;
			}
			game->map.j++;
		}
		game->map.i++;
	}
	return (count);
}
