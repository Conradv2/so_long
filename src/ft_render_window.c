/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:43:52 by conradv2          #+#    #+#             */
/*   Updated: 2025/03/22 21:43:53 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_render_window(t_game *window)
{
	window->mlx = mlx_init();
	if (window->mlx == NULL)
	{
		perror("Error: mlx returned NULL. Closing...");
		exit(1);
	}
	window->mlx_win = mlx_new_window(window->mlx,
			1280, 720,
			"Escape from College");
	if (window->mlx_win == NULL)
	{
		perror("Error: mlx_win returned NULL. Closing...");
		mlx_destroy_display(window->mlx);
		free(window->mlx);
		exit(1);
	}
}
	// window->wall.img.img = mlx_xpm_file_to_image(window->mlx,
	// 		"./textures/Wall.xpm",
	// 		&window->wall.img.width,
	// 		&window->wall.img.height);
	// if (window->wall.img.img == NULL)
	// {
	// 	perror ("CHUJ");
	// }
	// window->map.i = 0;
	// while (window->map.i < window->map.row)
	// {
	// 	window->map.j = 0;
	// 	while (window->map.j < window->map.column)
	// 	{
	// 		if (window->map.map_arr[window->map.i][window->map.j] == '1')
	// 		{
	// 			mlx_put_image_to_window(window->mlx,
	// 				window->mlx_win,
	// 				window->wall.img.img,
	// 				window->wall.img.width * window->map.j,
	// 				window->wall.img.height * window->map.i);
	// 		}
	// 		window->map.j++;
	// 	}
	// 	window->map.i++;
	// }
