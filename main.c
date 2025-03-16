#include "./minilibx-linux/mlx.h"
#include "stdio.h"

int	main(void)
{
	void	*mlx;
	void	*mlx_win;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 800, 600, "Siemaneczko!");
	mlx_loop(mlx);
	printf("%p", mlx);
	return (0);

}
