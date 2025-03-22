/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_x_case.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conrad <conrad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 00:47:47 by conradv2          #+#    #+#             */
/*   Updated: 2025/02/18 18:06:23 by conrad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_hex_x_case(size_t ap_value, int count)
{
	char	*x_array;

	x_array = (char *)malloc((count + 1) * sizeof(char));
	if (x_array == NULL)
		return (0);
	ft_l_fill_array(ap_value, x_array);
	ft_reverse_array(x_array);
	ft_putstr_fd(x_array, 1);
	free(x_array);
	return (count);
}
