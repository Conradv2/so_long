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
		mlx_destroy_display(window->mlx);
		free(window->mlx);
	}
	window->mlx_win = mlx_new_window(window->mlx,
			1280, 720,
			"Escape from College");
	if (window->mlx_win == NULL)
	{
		perror("Error: mlx_win returned NULL. Closing...");
		mlx_destroy_window(window->mlx, window->mlx_win);
		mlx_destroy_display(window->mlx);
		free(window->mlx);
	}
}
