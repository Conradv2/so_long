/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 22:51:47 by conradv2          #+#    #+#             */
/*   Updated: 2025/03/22 22:51:48 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "../ft_printf/ft_printf.h"

int	ft_key_input(int keysym, t_game *game)
{
	ft_printf("%d is being pressed\n", keysym);
	if (keysym == XK_Escape)
	{
		ft_printf("Pressed Esc, closing game!\n");
		mlx_destroy_window(game->mlx, game->mlx_win);
		mlx_destroy_display(game->mlx);
		free(game->mlx);
		exit (1);
	}
	if (keysym == XK_a)
	{
		ft_printf("TEST\n");
	}
	return (0);
}
