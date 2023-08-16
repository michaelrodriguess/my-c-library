/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:44:49 by microdri          #+#    #+#             */
/*   Updated: 2022/06/22 17:16:52 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count_digit(int n)
{
	int				digits;
	unsigned int	aux_nbr;

	digits = 0;
	aux_nbr = n;
	if (n < 0)
	{
		digits += 1;
		aux_nbr = n * -1;
	}
	while (aux_nbr > 9)
	{
		aux_nbr = aux_nbr / 10;
		digits++;
	}
	digits++;
	return (digits);
}

int	ft_print_digit(int n)
{
	int	count_decimal;

	count_decimal = ft_count_digit(n);
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (count_decimal);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_print_digit(n / 10);
	}
	n = n % 10 + '0';
	write(1, &n, 1);
	return (count_decimal);
}
