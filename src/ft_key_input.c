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
	// ft_printf("%d is being pressed\n", keysym);
	if (keysym == XK_Escape)
	{
		ft_printf("Pressed Esc, closing game!\n");
		ft_exit_game(game);
	}
	// if (keysym == XK_a)
	// {
	// 	ft_printf("TEST\n");
	// }
	ft_printf("TEST OF MOVEMENT!\n");
	if (keysym == XK_a)
	{
		if (game->map.map_arr[game->player.y][game->player.x - 1] != '1')
		{
			game->map.map_arr[game->player.y][game->player.x - 1] = 'P';
			game->map.map_arr[game->player.y][game->player.x] = '0';
			game->player.x -= 1;
		}
	}
	if (keysym == XK_d)
	{
		if (game->map.map_arr[game->player.y][game->player.x + 1] != '1')
		{
			game->map.map_arr[game->player.y][game->player.x + 1] = 'P';
			game->map.map_arr[game->player.y][game->player.x] = '0';
			game->player.x += 1;
		}
	}
	if (keysym == XK_w)
	{
		if (game->map.map_arr[game->player.y - 1][game->player.x] != '1')
		{
			game->map.map_arr[game->player.y - 1][game->player.x] = 'P';
			game->map.map_arr[game->player.y][game->player.x] = '0';
			game->player.y -= 1;
		}
	}
	if (keysym == XK_s)
	{
		if (game->map.map_arr[game->player.y + 1][game->player.x] != '1')
		{
			game->map.map_arr[game->player.y + 1][game->player.x] = 'P';
			game->map.map_arr[game->player.y][game->player.x] = '0';
			game->player.y += 1;
		}
	}
	ft_print_arr(game);
	return (0);
}
