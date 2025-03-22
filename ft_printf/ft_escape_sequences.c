/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_escape_sequences.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 02:19:41 by conradv2          #+#    #+#             */
/*   Updated: 2025/02/08 00:56:43 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_escape_sequences(const char *string, int *i)
{
	if (string[*i + 1] == 'n')
		write(1, "\n", 1);
	(*i) += 2;
	return (1);
}
