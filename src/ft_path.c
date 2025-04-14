/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:02:03 by conradv2          #+#    #+#             */
/*   Updated: 2025/04/08 17:02:15 by conradv2         ###   ########.fr       */
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

// int	ft_collect_path(t_game *game, char **visited)
// {
// 	int	count;

// 	count = 0;
// 	game->map.i = 0;
// 	while (game->map.i < game->collectible->count)
// 	{
// 		if (visited[game->collectible[game->map.i].y][game->collectible[game->map.i].x] == '1')
// 		{
// 			ft_printf("\nCOLLECTIBLE AT\nvisited");
// 			ft_printf("[%d][%d] = ", game->collectible[game->map.i].y, game->collectible[game->map.i].x);
// 			ft_printf("%c\n", visited[game->collectible[game->map.i].y][game->collectible[game->map.i].x]);
// 			count++;
// 		}
// 		game->map.i++;
// 	}
// 	if (count == game->collectible->count)
// 		return (count);
// 	return (1);
// }

int	ft_dfs(t_game *game, char **visited, int start_y, int start_x)
{
	if (visited[start_y][start_x] == '1' ||
		game->map.map_arr[start_y][start_x] == '1')
		return (0);
	if (game->map.map_arr[start_y][start_x] ==
		game->map.map_arr[game->exit.y][game->exit.x])
	{
		visited[start_y][start_x] = game->map.map_arr
		[game->exit.y][game->exit.x];
		return (1);
	}
	visited[start_y][start_x] = '1';
	if (ft_dfs(game, visited, start_y + 1, start_x) == 1)
		return (1);
	if (ft_dfs(game, visited, start_y - 1, start_x) == 1)
		return (1);
	if (ft_dfs(game, visited, start_y, start_x - 1) == 1)
		return (1);
	if (ft_dfs(game, visited, start_y, start_x + 1) == 1)
		return (1);
	return (0);
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
	ft_printf("ft_printf in ft_path in ft_check_map\n");
	ft_printf("visited arr row  = %d\n", game->map.i);
	ft_printf("visited arr column = %d\n", game->map.j);
	if (ft_dfs(game, visited, game->player.y,
			game->player.x) == 1)
		ft_printf("\n\n\n\nTHERE IS A VALID PATH!\n\n\n\n");
	else
		ft_printf("\n\n\n\nTHERE IS NOT A VALID PATH!\n\n\n\n");
	ft_printf("ft_printf in ft_path in ft_check_map.c\n");
	ft_printf("check on visited arr\n");
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
	// ft_printf("the amount of collectibles = %d\n", ft_collect_path(game, visited));
	// ft_printf("\n\n\nCOLLECTILBES TESTESTEST = %d\n\n\n", game->collectible[0].count);
	ft_free_visited(game, visited);
}
