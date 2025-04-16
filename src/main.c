/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 20:34:15 by conradv2          #+#    #+#             */
/*   Updated: 2025/03/22 20:34:18 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/*
 1 -> wall
 0 -> empty space
 P -> player (and his position)
 C -> collectible
 E -> exit
 */

int	main(void)
{
	t_game	game;

	ft_handle_map(&game);
	ft_render_window(&game);
	ft_game_loop(&game);
	// free(game.collectible);
	// ft_free_arr(&game);
	return (0);
}
// ft_render_window(&game);
// ft_game_loop(&game);

// t_map	map;
// game.map.map_arr = ft_create_arr(&map);	
// ft_free_arr(&game);
