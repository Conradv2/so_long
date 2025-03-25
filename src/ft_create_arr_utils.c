/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:00:34 by conradv2          #+#    #+#             */
/*   Updated: 2025/03/24 21:00:35 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_get_col_row(t_map *map)
{
	while (1)
	{
		map->line = get_next_line(map->fd_map);
		if (map->line == NULL)
			break ;
		map->column = ft_strlen(map->line) - 1;
		map->row++;
		free(map->line);
	}
}

void	ft_malloc_check(t_map *map)
{
	int	j;

	j = 0;
	if (map->map_arr[map->i] == NULL)
	{
		while (j++ < map->i)
			free(map->map_arr[j]);
		free (map->map_arr);
		exit (1);
	}
}
