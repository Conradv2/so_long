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
#include <fcntl.h>

void	ft_key_input(int keysym, t_game *game)
{
	if (keysym == XK_Escape)
	{
	}
}

int	main(void)
{
	t_game	game;

	ft_render_window(&game);
	//mlx_key_hook(game.mlx, int (*funct_ptr)(), &game);
	mlx_loop(game.mlx);
	mlx_destroy_window(game.mlx, game.mlx_win);
	mlx_destroy_display(game.mlx);
	free(game.mlx);
	return (0);
}
