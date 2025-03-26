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

#include "ft_create_arr_utils.h"
#include "so_long.h"

void	ft_check_map(t_game *game)
{
	ft_printf("Welcome to the rice fields\n");
	char		tmp;
	int			j;
	int			i;

	j = 0;
	i = 0;
	tmp = '1';
	ft_map_init(&game->map);
	ft_get_col_row(game);
	close(game->map.fd_map);
	ft_map_init(&game->map);
	while (1)
	{
		game->map.line = get_next_line(game->map.fd_map);
		if (game->map.line == NULL)
		{
			ft_printf("again gnl fail");
			break ;
		}	
		ft_printf("%s", game->map.line);
		j = 0;
		while (j < game->map.row)
		{
			if (tmp != game->map.line[j] && i < game->map.column)
			{
				ft_printf("Man, this is bullshit...");
				free(game->map.line);
				close(game->map.fd_map);
				exit(1);
				i++;
			}
			j++;
		}
		free(game->map.line);
	}
	close(game->map.fd_map);
}
