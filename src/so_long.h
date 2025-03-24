/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 20:34:38 by conradv2          #+#    #+#             */
/*   Updated: 2025/03/22 20:34:39 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../minilibx-linux/mlx.h"
# include "stdlib.h"
# include "X11/keysym.h"
# include "stdio.h"
# include "unistd.h"
# include "get_next_line.h"
# include "../ft_printf/ft_printf.h"
# include <fcntl.h>

typedef struct s_texture
{
}	t_texture;

typedef struct s_map
{
	char	**map_arr;
	char	*line;// <--testing
	int		row;
	int		column;
	int		fd_map;// <--testing
	int		i;// <--testing
}	t_map;

typedef struct s_game
{
	void	*mlx;
	void	*mlx_win;
	t_map	map;
}	t_game;

void	ft_render_window(t_game *window);
void	ft_game_loop(t_game *game);
char	**ft_create_arr(t_map *map); // <--this returns a pointer to a 2d array that i just create;
char	**ft_fill_arr(void); // <--this fills created array with elements in a map.ber
void	ft_print_arr(t_game *game); // <--not that neccesary at this point but nice to have for testing;
void	ft_handle_map(t_game *game); // <-- this will handle map buff creation and filling;
void	ft_free_arr(t_game *game); // <--this will free the memory of created array at the end of a program;
int		ft_key_input(int keysym, t_game *game);
#endif
