/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conrad <conrad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:04:00 by conrad            #+#    #+#             */
/*   Updated: 2025/03/18 19:04:01 by conrad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minilibx-linux/mlx.h"
#include "so_long.h"

int	ft_render_window(t_game_window *window_ptr)
{
	window_ptr->mlx_win = mlx_new_window(window_ptr->mlx,
			1280, 720, "Siemaneczko!");
	if (window_ptr->mlx_win == NULL)
	{
		mlx_destroy_display(window_ptr->mlx);
		free(window_ptr->mlx);
		return (1);
	}
	return (0);
}

void	ft_color_screen (t_game_window *window_ptr)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (i < 721)
	{
		y = 0;
		while (y < 1281)
		{
			mlx_pixel_put(window_ptr->mlx, window_ptr->mlx_win, y, i, 0xFF0000);
			y++;
		}
		i++;
	}
	/*for (i = 0; i < 1921; i++)
	{
		for (y = 0; y < 1081; y++)
		{
			mlx_pixel_put(window_ptr->mlx, window_ptr->mlx_win, i, y, 0xFF0000);
		}
	}*/
}

void	ft_load_textures(void);

int	main(void)
{
	t_game_window	window;

	window.mlx = mlx_init();
	if (window.mlx == NULL)
		return (1);
	ft_render_window(&window);
	mlx_key_hook(window.mlx_win, ft_keysym, &window);
	//ft_load_textures(void);
	mlx_loop(window.mlx);
	mlx_destroy_window(window.mlx, window.mlx_win);
	mlx_destroy_display(window.mlx);
	free(window.mlx);
	return (0);
}
