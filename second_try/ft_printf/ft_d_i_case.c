/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_i_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 12:27:52 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/29 01:35:12 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_d_i_case(int *i, va_list ap)
{
	int	count;
	int	ap_value;

	ap_value = va_arg(ap, int);
	count = ft_digit_counter(ap_value);
	ft_putnbr_fd(ap_value, 1);
	(*i) += 2;
	return (count);
}
