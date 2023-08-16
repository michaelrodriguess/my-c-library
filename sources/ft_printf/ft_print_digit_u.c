/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:03:34 by microdri          #+#    #+#             */
/*   Updated: 2022/06/22 17:17:20 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	ft_count_digit(unsigned int n)
{
	unsigned int	digits;

	digits = 0;
	while (n > 9)
	{
		n = n / 10;
		digits++;
	}
	digits++;
	return (digits);
}

unsigned int	ft_print_digit_u(unsigned int n)
{
	unsigned int	count_decimal_u;

	count_decimal_u = ft_count_digit(n);
	if (n > 9)
	{
		ft_print_digit_u(n / 10);
	}
	n = n % 10 + '0';
	write(1, &n, 1);
	return (count_decimal_u);
}
