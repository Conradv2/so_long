/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:27:03 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/02/01 16:24:40 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_s_case(int *i, va_list ap)
{
	int		count;
	char	*str;

	count = 0;
	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	count += ft_strlen(str);
	ft_putstr_fd(str, 1);
	(*i) += 2;
	return (count);
}

	// if (str == NULL)
	// {
	// 	(*i) += 2;	
	// 	return (0);
	// }