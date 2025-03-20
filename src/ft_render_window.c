#include "so_long.h"
#include "../minilibx-linux/mlx.h"

int	ft_render_window(t_game_window *window_ptr)
{
	window_ptr->mlx_win = mlx_new_window(window_ptr->mlx,
			1280, 720, "Siemaneczko!");
	if (window_ptr->mlx_win == NULL)
	{
		mlx_destroy_display(window_ptr->mlx);
		free(window_ptr->mlx);
		return (1);
	}
	return (0);
}
