/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:43:07 by conradv2          #+#    #+#             */
/*   Updated: 2025/03/24 20:43:08 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_handle_map(t_game *game)
{
	ft_create_arr(game);
	ft_print_arr(game);
	// ft_printf("\n");
	ft_check_map(game);
	ft_printf("Exit position: y = [%d] x = [%d]\n", game->exit.y, game->exit.x);
	ft_printf("Rows = %d\nColumns = %d\n", game->map.row, game->map.column);
	ft_printf("The element = %d\n",game->map.map_arr[game->map.row - 1][game->map.column - 1]);
	ft_print_arr(game);
}
