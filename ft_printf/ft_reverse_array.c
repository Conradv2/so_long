/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:28:29 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/02/08 00:59:48 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_reverse_array(char *_x_array)
{
	int		i;
	int		arr_len;
	char	tmp;

	tmp = 0;
	arr_len = ft_strlen(_x_array);
	i = 0;
	while (i < arr_len / 2)
	{
		tmp = _x_array[i];
		_x_array[i] = _x_array[arr_len - i - 1];
		_x_array[arr_len - i - 1] = tmp;
		i++;
	}
}
