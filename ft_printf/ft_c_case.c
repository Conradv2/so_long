/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:27:51 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/01/28 03:59:46 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_c_case(int *i, va_list ap)
{
	int	count;

	count = 0;
	ft_putchar_fd(va_arg(ap, int), 1);
	count++;
	(*i) += 2;
	return (count);
}
