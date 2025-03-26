/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_arr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:42:59 by conradv2          #+#    #+#             */
/*   Updated: 2025/03/24 20:43:01 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "ft_create_arr_utils.h"

void	ft_create_arr(t_game *game)
{
	game->map.i = 0;
	game->map.row = 0;
	ft_map_init(&game->map);
	ft_get_col_row(game);
	game->map.map_arr = (char **)malloc(game->map.row * sizeof(char *));
	if (game->map.map_arr == NULL)
		exit (1);
	while (game->map.i < game->map.row)
	{
		game->map.map_arr[game->map.i] = (char *)malloc
			(game->map.column * sizeof(char));
		ft_malloc_check (&game->map);
		game->map.i++;
	}
	close(game->map.fd_map);
	ft_fill_arr(game);
}
// i mean it works like i wanted it to work
