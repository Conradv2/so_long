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
	int		width;
	int		height;
	void	*img;
	char	*img_path;
}	t_texture;

typedef struct s_entity
{
	int			x;
	int			y;
	t_texture	img;
}	t_entity;

typedef struct s_map
{
	char	**map_arr;
	char	*file_path; // <--ths will be set in the ft_handle_map
	char	*line;// <--testing
	int		row;
	int		column;
	int		fd_map;// <--testing
	int		i;// <--testing
	int		j;
}	t_map;

typedef struct s_game
{
	void		*mlx;
	void		*mlx_win;
	t_map		map;
	t_entity	player;
	t_entity	exit;
	t_entity	wall;
	t_entity	*collectible;
}	t_game;

void	ft_render_window(t_game *window);
void	ft_game_loop(t_game *game);
void	ft_create_arr(t_game *game);
void	ft_fill_arr(t_game *game);
void	ft_print_arr(t_game *game);
void	ft_handle_map(t_game *game);
void	ft_check_map(t_game *game);
int		ft_init_player(t_game *game);
int		ft_init_collectible(t_game *game);
void	ft_free_arr(t_game *game);
int		ft_exit_game(t_game *game);
int		ft_key_input(int keysym, t_game *game);
#endif
