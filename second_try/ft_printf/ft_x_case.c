/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conrad <conrad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 01:40:25 by conradv2          #+#    #+#             */
/*   Updated: 2025/02/18 18:07:03 by conrad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_x_case(int *i, va_list ap, const char *format)
{
	unsigned int			ap_value;
	int						count;
	char					*x_array;

	ap_value = va_arg(ap, unsigned int);
	count = 0;
	if (ap_value == 0)
		ft_putnbr_fd(0, 1);
	count = ft_hex_digit_counter(ap_value);
	x_array = (char *)malloc((count + 1) * sizeof(char));
	if (x_array == NULL)
		return (0);
	if (*format == 'x')
		ft_l_fill_array(ap_value, x_array);
	else
		ft_up_fill_array(ap_value, x_array);
	ft_reverse_array(x_array);
	ft_putstr_fd(x_array, 1);
	(*i) += 2;
	free(x_array);
	return (count);
}
/*
		//count += 1 --> need to check later on that
		//maybe (*i) += 2;
		//could just return 0 at this poin lol
	// ft_print_array(x_array); // remove this and just use ft_pustr_fd instead
	//count = ft_x_digit_counter(ap_value);
	// 	
	//									if remainder == 10 -> a
	//												 == 11 -> b
	//												 == 12 -> c
	//												 == 13 -> d
	//							while (ap_value != 0)
	{
		if (ap_value % 16 == 10)
			x_array[j] = 'a';
		else if (ap_value % 16 == 11)
			x_array[j] = 'b';
		else if (ap_value % 16 == 12)
			x_array[j] = 'c';
		else if (ap_value % 16 == 13)
			x_array[j] = 'd';
		else if (ap_value % 16 == 14)
			x_array[j] = 'e';
		else if (ap_value % 16 == 15)
			x_array[j] = 'f';
		else
		{
			x_array[j] = (ap_value % 16) + '0';
		}
		ap_value /= 16;
		j++;
	}					 == 14 -> e
	//												 == 15 -> f
	// int i = 100 -> 100 / 16 -> 6 -> remainder 4 -----------
	//												   	     |
	// 					6 / 16 -> 0 -> remainder 6 -----------
	// 					100(10) -> 64(16)					 |
	// 													     |
	// 						     ------ x_arr[] = {4, 6} <----
	//			                 |
	// 							 -----> swap_arr(x_arr) --------
	//											               |
	//									x_arr[] = {6, 4} <------
i pass a number as a integer, for example 255, then i want to divide it by 16
and then divide the number that was just divided
and so on but store the % remainder in a array, so it would be two while loops, 
first would count how many times it is dividing and take this number
as a representative of how much space to allocate so if 255 takes 2 divides then 
it should allocate 2 + 1 space (cause of NULL) and at the end i should 
reverse the string and print it to get the value im looking for



for ap < 0 i need to reverse bits and add 1
and then get this number and convert it to hex as always

so for example: -42
				  42 -> 00101010
				-43 ->	11010101 <- 213
						add    1
				 -42 ->	11010110 <- now its 214
						and now convert 214 to hex
						https://www.allmath.com/twos-complement.php
		8 bit ---->		214(10) = D6
		16 bit ---> 	214(10) = FFD6
		32 bit --->		214(10) = FFFFFFD6
*/

/*
while (ap_value != 0)
	{
		if (ap_value % 16 == 10)
			x_array[j] = 'a';
		else if (ap_value % 16 == 11)
			x_array[j] = 'b';
		else if (ap_value % 16 == 12)
			x_array[j] = 'c';
		else if (ap_value % 16 == 13)
			x_array[j] = 'd';
		else if (ap_value % 16 == 14)
			x_array[j] = 'e';
		else if (ap_value % 16 == 15)
			x_array[j] = 'f';
		else
		{
			x_array[j] = (ap_value % 16) + '0';
		}
		ap_value /= 16;
		j++;
	}
*/

/*
	int k = 0;
	char c = 'a';
	while (k++ < 16)
	{
		if (k < 10)
			x_array[j++] = (ap_value % 16) + '0';
		else
			x_array[j++] = c;
		ap_value /= 16;
	}
*/

/*
	int			count;
	int			ap_value;
	int			tmp;
	char		*x_array;
	int			j;

	ap_value = va_arg(ap, int);
	tmp = ap_value;
	count = 0;
	j = 0;
	if (ap_value == 0)
	{
		ft_putnbr_fd(0, 1);
		(*i) += 2;
		return (1);
	}
	while (tmp != 0)
	{
		tmp /= 16;
		count++;
	}
	x_array = (char *)malloc((count + 1) * sizeof(char));
	if (x_array == NULL)
		return (0);
	while (ap_value != 0)
	{
		if (ap_value % 16 == 10)
			x_array[j] = 'a';
		else if (ap_value % 16 == 11)
			x_array[j] = 'b';
		else if (ap_value % 16 == 12)
			x_array[j] = 'c';
		else if (ap_value % 16 == 13)
			x_array[j] = 'd';
		else if (ap_value % 16 == 14)
			x_array[j] = 'e';
		else if (ap_value % 16 == 15)
			x_array[j] = 'f';
		else
		{
			x_array[j] = (ap_value % 16) + '0';
		}
		ap_value /= 16;
		j++;
	}
	x_array[j] = '\0';
	j = 0;
	ft_swap_array(x_array);
	ft_print_array(x_array);
	(*i) += 2;
	free(x_array);
	return (count);
*/