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
#include "get_next_line.h"

typedef struct s_texture
{
}	t_texture;

typedef struct s_game
{
	void	*mlx;
	void	*mlx_win;
}	t_game;

void	ft_render_window(t_game *window);
void	ft_game_loop(t_game *game);
int		ft_key_input(int keysym, t_game *game);
#endif
