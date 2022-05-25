/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:12:12 by microdri          #+#    #+#             */
/*   Updated: 2022/05/16 18:06:23 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digit(int n)
{
	int				digits;
	unsigned int	aux_nbr;

	digits = 0;
	if (n < 0)
	{
		digits += 1;
		aux_nbr = n * -1;
	}
	else
		aux_nbr = n;
	while (aux_nbr > 9)
	{
		aux_nbr = aux_nbr / 10;
		digits++;
	}
	digits++;
	return (digits);
}

char	*ft_itoa(int n)
{
	char			*to_string;
	int				digits;
	unsigned int	aux_nbr;

	digits = ft_count_digit(n);
	to_string = malloc(digits + 1 * sizeof(char));
	if (to_string == NULL)
		return (NULL);
	to_string[digits] = '\0';
	aux_nbr = n;
	if (n < 0)
		aux_nbr = n * -1;
	while (digits--)
	{
		to_string[digits] = (aux_nbr % 10) + '0';
		aux_nbr = aux_nbr / 10;
	}
	if (n < 0)
		to_string[0] = '-';
	return (to_string);
}
