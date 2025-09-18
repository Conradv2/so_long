#ifndef MAIN_H
# define MAIN_H

typedef struct s_texture
{
	void	*img;
	char	*img_path;
	int		width;
	int		height;
}	t_texture;

typedef struct s_entity
{
	int		x;
	int		y;
	int		count;
}	t_entity;

typedef struct s_window
{
	void	*mlx;
	void	*mlx_win;
}	t_window;

typedef struct s_map
{
	char		**map_arr;
	char		**file_path;
	char		*line;
	int			row;
	int			column;
	int			fd_map;

	t_entity	player;
	t_entity	exit;
	t_entity	wall;
	t_entity	*collectible;
}	t_map;

#endif
