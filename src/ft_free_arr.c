/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:27:32 by conradv2          #+#    #+#             */
/*   Updated: 2025/03/24 22:27:33 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free_arr(t_game *game)
{
	game->map.i = 0;
	while (game->map.i < game->map.row)
	{
		ft_printf("Freeing row arr[%d]\n", game->map.i);
		free(game->map.map_arr[game->map.i]);
		game->map.i++;
	}
	ft_printf("Freeing **map_arr pointer %d\n", game->map.map_arr);
	free(game->map.map_arr);
}
