#include "stdio.h"
#include "stdlib.h"
#include "main.h"
#include "../minilibx-linux/mlx.h"

int	main(void)
{

	t_window window;

	window.mlx = mlx_init();
	if (window.mlx == NULL)
	{
		perror("Error: mlx return NULL. Closing...");
		exit(1);
	}
	window.mlx_win = mlx_new_window(window.mlx, 800, 800, "TEST_GAME");
	if (window.mlx_win == NULL)
	{
		perror("Error: mlx_win returned NULL. Closing...");
		mlx_destroy_display(window.mlx);
		free(window.mlx);
		exit(1);
	}

	mlx_loop(window.mlx);
	mlx_destroy_window(window.mlx, window.mlx_win);
	mlx_destroy_display(window.mlx);
	free(window.mlx);
	printf("siemano test");
	return (0);
}
