/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 01:31:33 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/30 01:32:21 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_u_putnbr_fd(unsigned int n, int fd)
{
	char	_n;

	if (n <= 9)
	{
		_n = n + '0';
		write (fd, &_n, 1);
	}
	else
	{
		ft_u_putnbr_fd(n / 10, fd);
		ft_u_putnbr_fd(n % 10, fd);
	}
}
