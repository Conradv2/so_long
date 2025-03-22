/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:29:05 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/02/01 16:29:24 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_print_array(const char *_x_array)
{
	int	j;

	j = 0;
	while (_x_array[j] != '\0')
	{
		ft_putchar_fd(_x_array[j], 1);
		j++;
	}
}
