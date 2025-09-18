/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_loop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 23:27:25 by conradv2          #+#    #+#             */
/*   Updated: 2025/09/18 14:50:09 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	test_rendering_game(t_game *game)
{
	void	*player_ptr;
	char	*player_path = "./textures/Character.xpm";
	int		player_width;
	int		player_height;

	void	*img;
	char	*relative_path = "./textures/Wall.xpm";
	int		width;
	int		height;

	img = mlx_xpm_file_to_image(game->mlx, relative_path, &width, &height); 
	player_ptr = mlx_xpm_file_to_image(game->mlx, player_path, &player_width, &player_height);
	if (img == NULL)
		perror("CHUJ");
	game->map.i = 0;
	while (game->map.i < game->map.row)
	{
		game->map.j = 0;
		while (game->map.j < game->map.column)
		{
			if (game->map.map_arr[game->map.i][game->map.j] == '1')
				mlx_put_image_to_window(game->mlx, game->mlx_win, img, width * game->map.j, height * game->map.i);
			if (game->map.map_arr[game->map.i][game->map.j] == 'P')
				mlx_put_image_to_window(game->mlx, game->mlx_win, player_ptr, player_width * game->map.j, player_height * game->map.i);
			game->map.j++;
		}
		game->map.i++;
	}
}

void	ft_game_loop(t_game *game)
{
	test_rendering_game(game);
	mlx_key_hook(game->mlx_win, ft_key_input, game);
	mlx_loop(game->mlx);
	mlx_destroy_window(game->mlx, game->mlx_win);
	mlx_destroy_display(game->mlx);
	free(game->mlx);
}
