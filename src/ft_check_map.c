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

void	ft_free_visited(t_game *game, char **visited)
{
	game->map.i = 0;
	while (game->map.i < game->map.row)
	{
		free(visited[game->map.i]);
		game->map.i++;
	}
	free(visited);
}

char	**ft_map_copy(t_game *game)
{
	char	**visited;
	
	game->map.i = 0;
	visited = (char **)malloc(game->map.row * sizeof(char *));
	while (game->map.i < game->map.row)
	{
		visited[game->map.i] = (char *)malloc(game->map.column * sizeof(char));
		game->map.i++;
	}
	game->map.i = 0;
	while (game->map.i < game->map.row)
	{
		game->map.j = 0;
		while (game->map.j < game->map.column)
		{
			visited[game->map.i][game->map.j] = '0';
			game->map.j++;
		}
		game->map.i++;
	}
	return (visited);
}

void	ft_path(t_game *game)
{
	char	**visited;

	visited = ft_map_copy(game);
	ft_printf("\nft_path in ft_check_map\n");
	game->map.i = 0;
	while (game->map.i < game->map.row)
	{
		game->map.j = 0;
		while (game->map.j < game->map.column)
		{
			ft_printf("%c", visited[game->map.i][game->map.j]);
			game->map.j++;
		}
		ft_printf("\n");
		game->map.i++;
	}
	ft_printf("ft_printf in ft_path in ft_check_map\nvisited arr len = %d\nvisited arr row  = %d\nvisited arr column = %d\n", ft_strlen(visited[0]), game->map.i, game->map.j);
	ft_free_visited(game, visited);
}
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
	ft_path(game);
	// if (ft_path(game) != 1)
	// {
	// 	perror("There is not a valid path...");
	// 	ft_fun(game);
	// }
}
