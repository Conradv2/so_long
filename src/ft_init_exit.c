/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_exit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conrad <conrad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:09:46 by conrad            #+#    #+#             */
/*   Updated: 2025/03/30 18:09:47 by conrad           ###   ########.fr       */
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
				count++;
			}
			game->map.j++;
		}
		game->map.i++;
	}
	return (count);
}
// game->map.map_arr[game->map.i][game->map.j] = '0';
