/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:48:54 by microdri          #+#    #+#             */
/*   Updated: 2022/10/14 18:53:18 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_isspace(int c)
{
	if ((c == '\f') || (c == '\n') || (c == '\r') || (c == '\t')
		|| (c == '\v') || (c == ' '))
		return (1);
	return (0);
}

static int	get_signal(char **str)
{
	int	signal;

	signal = 1;
	while (ft_isspace(**str))
		(*str)++;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			signal = -1;
		(*str)++;
	}
	return (signal);
}

static int	ft_atoi_mod(char **nptr)
{
	size_t		result_value;

	result_value = 0;
	while (ft_isdigit(**nptr))
	{
		result_value = result_value * 10 + **nptr - '0';
		(*nptr)++;
	}
	return (result_value);
}

double	ft_atof(char *str)
{
	double	result;
	int		signal;
	size_t	index;

	index = 0;
	result = 0;
	signal = get_signal(&str);
	result = ft_atoi_mod(&str);
	if (str[index] == '.')
		index++;
	while (ft_isdigit(str[index]))
	{
		result = result + (str[index] - '0') / pow(10, index);
		index++;
	}
	return (result * signal);
}
