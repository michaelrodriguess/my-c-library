/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 08:49:09 by microdri          #+#    #+#             */
/*   Updated: 2022/12/17 18:13:10 by microdri         ###   ########.fr       */
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

long	ft_atoi(const char *n)
{
	long	i;
	int		signal;
	long	result_value;

	result_value = 0;
	i = 0;
	signal = 1;
	while (ft_isspace(n[i]))
		i++;
	if (n[i] == '-' || n[i] == '+')
	{
		if (n[i] == '-')
			signal = -1;
		i++;
	}			
	while (ft_isdigit(n[i]))
	{	
		result_value = result_value * 10 + n[i] - '0';
		i++;
	}
	return (result_value * signal);
}
