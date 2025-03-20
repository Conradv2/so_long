/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conrad <conrad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 00:31:55 by conrad            #+#    #+#             */
/*   Updated: 2025/03/21 00:31:56 by conrad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "../minilibx-linux/mlx.h"

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
