/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent_case.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:26:00 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/01/26 12:38:03 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_percent_case(int *i)
{
	int	count;

	count = 0;
	ft_putchar_fd('%', 1);
	count++;
	(*i) += 2;
	return (count);
}
