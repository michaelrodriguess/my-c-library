/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lower_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:12:57 by microdri          #+#    #+#             */
/*   Updated: 2022/06/22 17:59:08 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

static unsigned int	ft_count_digit(unsigned int n)
{
	unsigned int	digits;

	digits = 0;
	while (n > 15)
	{
		n = n / 16;
		digits++;
	}
	digits++;
	return (digits);
}

unsigned int	ft_print_lower_hex(unsigned int n, char *str)
{
	unsigned int		count_decimal;

	count_decimal = ft_count_digit(n);
	if (n > 15)
	{
		ft_print_lower_hex(n / 16, str);
	}
	n = n % 16;
	write(1, &str[n], 1);
	return (count_decimal);
}
