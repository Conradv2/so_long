/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_up_fill_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conrad <conrad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:20:50 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/02/18 18:05:55 by conrad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_up_fill_array(unsigned int ap_value, char *x_array)
{
	int	i;

	i = 0;
	while (ap_value != 0)
	{
		if (ap_value % 16 == 10)
			x_array[i] = 'A';
		else if (ap_value % 16 == 11)
			x_array[i] = 'B';
		else if (ap_value % 16 == 12)
			x_array[i] = 'C';
		else if (ap_value % 16 == 13)
			x_array[i] = 'D';
		else if (ap_value % 16 == 14)
			x_array[i] = 'E';
		else if (ap_value % 16 == 15)
			x_array[i] = 'F';
		else
			x_array[i] = (ap_value % 16) + '0';
		ap_value /= 16;
		i++;
	}
	x_array[i] = '\0';
}
