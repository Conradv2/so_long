/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:13:43 by conradv2          #+#    #+#             */
/*   Updated: 2025/03/24 22:13:45 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_print_arr(t_game *game)
{
	int	j;

	j = 0;
	game->map.i = 0;
	while (game->map.i < game->map.row)
	{
		j = 0;
		while (j < game->map.column)
		{
			ft_printf("%c", game->map.map_arr[game->map.i][j]);
			j++;
		}
		// ft_printf("\n");
		game->map.i++;
	}
}
