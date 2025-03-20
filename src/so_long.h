/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conrad <conrad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:04:04 by conrad            #+#    #+#             */
/*   Updated: 2025/03/18 19:04:04 by conrad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../minilibx-linux/mlx.h"
# include "stdlib.h"
# include "X11/keysym.h"
# include "stdio.h"

typedef struct s_game_window
{
	void	*mlx;
	void	*mlx_win;
}	t_game_window;

typedef struct s_textures
{
}	t_game_textures;
int		ft_keysym(int keysym, t_game_window *window_ptr);
int		ft_render_window(t_game_window *window_ptr);
void	ft_color_screen(t_game_window *window_ptr);
#endif
