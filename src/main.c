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
#include "stdio.h"
#include "stdlib.h"
#include "so_long.h"
#include "X11/keysym.h"

int	ft_keysym(int keysym, t_game_window *window_ptr)
{
	if (keysym == XK_Escape)
	{
		printf("%d key (Esc) has been pressed\n", keysym);
		mlx_destroy_window(window_ptr->mlx, window_ptr->mlx_win);
		mlx_destroy_display(window_ptr->mlx);
		free(window_ptr->mlx);
		exit(1);
	}
	if (keysym == XK_a)
		mlx_string_put(window_ptr->mlx, window_ptr->mlx_win, 1280/2, 720/2, 0xFF0000, "KUUUURWA PIWO, kurwaaaaa kocham kondziaaaaa");
	if (keysym == XK_d)
		mlx_clear_window(window_ptr->mlx, window_ptr->mlx_win);
	printf("%d key was pressed\n", keysym);
	if (keysym == XK_s)
		printf("TEST");
	return (0);
}

int	main(void)
{
	t_game_window	window;

	window.mlx = mlx_init();
	if (window.mlx == NULL)
		return (1);
	window.mlx_win = mlx_new_window(window.mlx, 1280, 720, "Siemaneczko!");
	if (window.mlx_win == NULL)
	{
		mlx_destroy_display(window.mlx);
		free(window.mlx);
		return (1);
	}
	ft_keysym(115, window.mlx_win);
	mlx_key_hook(window.mlx_win, ft_keysym, &window);
	mlx_loop(window.mlx);
	mlx_destroy_window(window.mlx, window.mlx_win);
	mlx_destroy_display(window.mlx);
	free(window.mlx);
	return (0);
}
