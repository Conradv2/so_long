/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit_counter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:47:09 by conradv2          #+#    #+#             */
/*   Updated: 2025/02/08 00:53:55 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_digit_counter(int digit)
{
	int	count;

	count = 0;
	if (digit == -2147483648)
		return (11);
	if (digit == 0)
		return (count + 1);
	if (digit < 0)
	{
		count = 1;
		digit *= -1;
	}
	while (digit > 0)
	{
		digit = digit / 10;
		count++;
	}
	return (count);
}
//cases for max int and max unsigned int