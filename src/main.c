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
	/*
		ft_create_arr(game);
		ft_printf("\nft_print_arr in ft_handle_map\n");
		ft_print_arr(game);
		// ft_printf("strlen = %d\n",ft_strlen(game->map.map_arr[0]));
		// game->map.map_arr[game->map.row - 2][game->map.column] = '\0';
		// printf("\n TEST = %c\n", game->map.map_arr[game->map.row - 2][game->map.column]);
		// ft_printf("\n");
		ft_check_map(game);
		ft_printf("ft_printf in ft_handle_map\nExit position: y = [%d] x = [%d]\n", game->exit.y, game->exit.x);
		ft_printf("Rows = %d\nColumns = %d\n", game->map.row, game->map.column);
		ft_printf("The element = %d\n",game->map.map_arr[game->map.row - 1][game->map.column - 1]);
		ft_printf("\nft_print_arr in ft_handle_map\n");
		ft_print_arr(game);
	*/
	ft_render_window(&game);
	ft_game_loop(&game);
	/*
		mlx_loop_hook(game->mlx, update, game);
		mlx_key_hook(game->mlx_win, ft_key_input, game);
		test_rendering_game(game);
		mlx_key_hook(game->mlx_win, ft_key_input, game);
		mlx_loop(game->mlx);
		mlx_destroy_window(game->mlx, game->mlx_win);
		mlx_destroy_display(game->mlx);
		free(game->mlx);
	*/
	free(game.collectible);
	ft_free_arr(&game);
	return (0);
}
// ft_render_window(&game);
// ft_game_loop(&game);

// t_map	map;
// game.map.map_arr = ft_create_arr(&map);	
// ft_free_arr(&game);
