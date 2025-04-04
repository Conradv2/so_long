/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wall_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conrad <conrad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 19:54:34 by conrad            #+#    #+#             */
/*   Updated: 2025/03/30 19:54:35 by conrad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_wall_check(t_game *game)
{
	int	is_there;

	is_there = 1;
	game->map.i = 0;
	while (game->map.i < game->map.row)
	{
		game->map.j = 0;
		while (game->map.j < game->map.column - 2)
		{
			if (!(game->map.map_arr[0][game->map.j] == '1'))
				is_there = 0;
			if (!(game->map.map_arr[game->map.row - 1][game->map.j] == '1'))
				is_there = 0;
			if (!(game->map.map_arr[game->map.i][0] == '1'))
				is_there = 0;
			if (!(game->map.map_arr[game->map.i][game->map.column - 2] == '1'))
				is_there = 0;
			game->map.j++;
		}
		game->map.i++;
	}
	return (is_there);
}
