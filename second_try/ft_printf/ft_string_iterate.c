/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_iterate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conrad <conrad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:28:25 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/02/18 17:55:20 by conrad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_string_iterate(const char *string, va_list ap)
{
	int	i;
	int	ft_count;

	i = 0;
	ft_count = 0;
	while (string[i] != '\0')
	{
		if (string[i] != '%')
			ft_count += ft_normal_case(string, &i);
		else if (string[i] == '%')
			ft_count += ft_specifier_check(string, &i, ap);
	}
	return (ft_count);
}

		// else
		// 	i++;