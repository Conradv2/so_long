/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normal_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:27:32 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/01/26 12:36:26 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_normal_case(const char *string, int *i)
{
	int	count;

	count = 0;
	ft_putchar_fd(string[*i], 1);
	count++;
	(*i)++;
	return (count);
}
