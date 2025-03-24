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

	ft_create_arr (game);
	ft_fill_arr(game);
	// game->map.map_arr = ft_fill_arr(&map); <-- this later also
	// ft_print_arr(game); //<--this later
}
