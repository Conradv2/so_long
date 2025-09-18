/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:43:45 by conradv2          #+#    #+#             */
/*   Updated: 2025/02/08 01:02:01 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_u_case(int *i, va_list ap)
{
	unsigned int	ap_value;
	int				count;

	ap_value = va_arg(ap, int);
	count = ft_u_digit_counter(ap_value);
	ft_u_putnbr_fd(ap_value, 1);
	(*i) += 2;
	return (count);
}
