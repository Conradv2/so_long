/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:32:34 by conradv2          #+#    #+#             */
/*   Updated: 2025/02/08 00:51:00 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_p_case(int *i, va_list ap)
{
	void	*ap_value;
	int		count;

	ap_value = va_arg(ap, void *);
	count = 0;
	if (ap_value == NULL)
	{
		ft_putstr_fd("(nil)", 1);
		(*i) += 2;
		return (5);
	}
	ft_putstr_fd("0x", 1);
	count += ft_hex_digit_counter((size_t)ap_value);
	ft_hex_x_case((size_t)ap_value, count);
	count += 2;
	(*i) += 2;
	return (count);
}
