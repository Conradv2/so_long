/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keysym.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conrad <conrad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:13:32 by conrad            #+#    #+#             */
/*   Updated: 2025/03/19 17:13:37 by conrad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "../minilibx-linux/mlx.h"

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
		mlx_string_put (window_ptr->mlx,
			window_ptr->mlx_win,
			1280 / 2,
			720 / 2,
			0xFF0000,
			"KUUUURWA PIWO, kurwaaaaa kocham kondziaaaaa");
	if (keysym == XK_d)
		mlx_clear_window (window_ptr->mlx, window_ptr->mlx_win);
	printf("%d key was pressed\n", keysym);
	if (keysym == XK_s)
		printf("TEST");
	if (keysym == XK_e)
		ft_color_screen(window_ptr);
	return (0);
}
