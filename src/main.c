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

int	main(void)
{
	t_game	game;

	ft_render_window(&game);
	ft_game_loop(&game);
	return (0);
}
