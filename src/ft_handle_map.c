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
	// ft_check_map(game); <-- it might be better to just check map on the newly created array
	// this function mmight just be opened at the start of the program
	// check for map validation and upon error exit safely;
	ft_create_arr (game);
	ft_print_arr(game);
	// ft_check_arr(game);
}
