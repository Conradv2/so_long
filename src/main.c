/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 20:34:15 by conradv2          #+#    #+#             */
/*   Updated: 2025/03/22 20:34:18 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "../ft_printf/ft_printf.h"
#include <fcntl.h>

/*
 1 -> wall
 0 -> empty space
 P -> player (and his position)
 C -> collectible
 E -> exit
 */

int	main(void)
{
	t_game	game;
	int		fd_map;
	// char	**map;
	char	*line;

	fd_map = open("maps/map.ber", O_RDONLY);
	if (fd_map < 0)
		perror("Error while loading map");
	while((line = get_next_line(fd_map)) != NULL)
	{
		ft_printf("%s", line);
		free(line);
	}
	ft_render_window(&game);
	ft_game_loop(&game);
	return (0);
}
