/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:52:06 by microdri          #+#    #+#             */
/*   Updated: 2022/06/23 10:48:15 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_formats(char str, va_list args)
{
	char	*hex_lower;
	char	*hex_upper;

	hex_lower = "0123456789abcdef";
	hex_upper = "0123456789ABCDEF";
	if (str == '%')
		return (ft_putchar('%'));
	else if (str == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (str == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (str == 'i' || str == 'd')
		return (ft_print_digit(va_arg(args, int)));
	else if (str == 'u')
		return (ft_print_digit_u(va_arg(args, unsigned int)));
	else if (str == 'x')
		return (ft_print_lower_hex(va_arg(args, unsigned int), hex_lower));
	else if (str == 'X')
		return (ft_print_upper_hex(va_arg(args, unsigned int), hex_upper));
	else if (str == 'p')
	{
		write(1, "0x", 2);
		return (ft_print_point(va_arg(args, unsigned long), hex_lower) + 2);
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			count += print_formats(str[++i], args);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
