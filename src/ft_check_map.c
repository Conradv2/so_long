/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 22:51:53 by conradv2          #+#    #+#             */
/*   Updated: 2025/03/26 22:51:55 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_fun(t_game *game)
{
	ft_free_arr(game);
	free(game->collectible);
	exit(1);
}

void	ft_check_map(t_game *game)
{
	if (!(ft_init_collectible(game) >= 1))
	{
		perror("There is too little collectibles to open the exit...");
		ft_fun(game);
	}
	if (ft_init_player(game) != 1)
	{
		perror("There is too much or not a single player...");
		ft_fun(game);
	}
	if (ft_init_exit(game) != 1)
	{
		perror("There is too much or not a single exit...");
		ft_fun(game);
	}
	if (ft_wall_check(game) != 1)
	{
		perror("There is missing wall...");
		ft_fun(game);
	}
	if (ft_path(game) == 1)
		ft_fun(game);
}
