/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_l_fill_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:37:06 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/02/08 00:57:47 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_l_fill_array(size_t ap_value, char *x_array)
{
	int	i;

	i = 0;
	while (ap_value != 0)
	{
		if (ap_value % 16 == 10)
			x_array[i] = 'a';
		else if (ap_value % 16 == 11)
			x_array[i] = 'b';
		else if (ap_value % 16 == 12)
			x_array[i] = 'c';
		else if (ap_value % 16 == 13)
			x_array[i] = 'd';
		else if (ap_value % 16 == 14)
			x_array[i] = 'e';
		else if (ap_value % 16 == 15)
			x_array[i] = 'f';
		else
			x_array[i] = (ap_value % 16) + '0';
		ap_value /= 16;
		i++;
	}
	x_array[i] = '\0';
}
