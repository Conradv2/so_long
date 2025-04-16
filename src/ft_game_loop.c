/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_loop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 23:27:25 by conradv2          #+#    #+#             */
/*   Updated: 2025/03/22 23:27:28 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	test_rendering_game(t_game *game)
{
	// void	*player_ptr;
	// char	*player_path = "./textures/Character.xpm";
	// int		player_width;
	// int		player_height;

	void	*img;
	char	*relative_path = "./textures/Wall.xpm";
	int		width;
	int		height;

	img = mlx_xpm_file_to_image(game->mlx, relative_path, &width, &height); 
	// player_ptr = mlx_xpm_file_to_image(game->mlx, player_path, &player_width, &player_height);
	if (img == NULL)
		perror("CHUJ");
	game->map.i = 0;
	while (game->map.i < game->map.row)
	{
		game->map.j = 0;
		while (game->map.j < game->map.column)
		{
			if (game->map.map_arr[game->map.i][game->map.j] == '1')
			{
				mlx_put_image_to_window(game->mlx, game->mlx_win, img, width * game->map.j, height * game->map.i);
			}
			// if (game->map.map_arr[game->map.i][game->map.j] == 'P')
			// {
			// 	mlx_clear_window(game->mlx, game->mlx_win);
			// 	mlx_put_image_to_window(game->mlx, game->mlx_win, player_ptr, player_width * game->map.j, player_height * game->map.i);
			// }
			//need to leave this function just render map
			//and have another function just to print player and objects separately
			//so that the map would be drawn first, then player, collectibles, exit etc
			//and i would just clear the window every time i move
			game->map.j++;
		}
		game->map.i++;
	}
	return (0);
}

int	rendering_player(t_game *game)
{
	void	*player_ptr;
	char	*player_path = "./textures/Character.xpm";
	int		player_width;
	int		player_height;

	player_ptr = mlx_xpm_file_to_image(game->mlx, player_path, &player_width, &player_height);
	game->map.i = 0;
	while (game->map.i < game->map.row)
	{
		game->map.j = 0;
		while (game->map.j < game->map.column)
		{
			if (game->map.map_arr[game->map.i][game->map.j] == 'P')
			{
				mlx_clear_window(game->mlx, game->mlx_win);
				mlx_put_image_to_window(game->mlx, game->mlx_win, player_ptr, player_width * game->map.j, player_height * game->map.i);
			}
			//need to leave this function just render map
			//and have another function just to print player and objects separately
			//so that the map would be drawn first, then player, collectibles, exit etc
			//and i would just clear the window every time i move
			game->map.j++;
		}
		game->map.i++;
	}
	return (0);
}

int	update(t_game *game)
{
	rendering_player(game);
	test_rendering_game(game);
	return (0);
}

void	ft_game_loop(t_game *game)
{
	// test_rendering_game(game);
	mlx_loop_hook(game->mlx, update, game);
	mlx_key_hook(game->mlx_win, ft_key_input, game);
	mlx_loop(game->mlx);
	mlx_destroy_window(game->mlx, game->mlx_win);
	mlx_destroy_display(game->mlx);
	free(game->mlx);
}
