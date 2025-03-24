/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:06:07 by conradv2          #+#    #+#             */
/*   Updated: 2025/03/24 22:06:08 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_fill_arr(t_game *game)
{
	int	j;

	j = 0;
	game->map.fd_map = open("map.ber", O_RDONLY);
	game->map.i = 0;
	//this while needs to be rebuilt, i cant have assign in control structure
	while ((game->map.line = get_next_line(game->map.fd_map)) != NULL)
	{
		j = 0;
		while (j < game->map.column)
		{
			game->map.map_arr[game->map.i][j] = game->map.line[j];
			j++;
		}
		game->map.i++;
		free(game->map.line);
	}
}
