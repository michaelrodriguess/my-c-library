/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:47:49 by microdri          #+#    #+#             */
/*   Updated: 2022/06/22 17:56:53 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned long	ft_count_digit(unsigned long n)
{
	unsigned long	digits;

	digits = 0;
	while (n > 15)
	{
		n = n / 16;
		digits++;
	}
	digits++;
	return (digits);
}

unsigned long	ft_print_point(unsigned long n, char *str)
{
	unsigned long		count_decimal;

	count_decimal = ft_count_digit(n);
	if (n > 15)
	{
		ft_print_point(n / 16, str);
	}
	n = n % 16;
	write(1, &str[n], 1);
	return (count_decimal);
}
