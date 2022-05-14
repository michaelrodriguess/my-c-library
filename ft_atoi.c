/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 08:49:09 by microdri          #+#    #+#             */
/*   Updated: 2022/05/14 14:07:21 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if ((c == '\f') || (c == '\n') || (c == '\r') || (c == '\t')
		|| (c == '\v') || (c == ' '))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	char	*use_nptr;
	int		i;
	int		result_value;

	use_nptr = (char *) nptr;
	result_value = 0;
	i = 0;
	while (ft_isspace(use_nptr[i]))
	{
		i++;
	}
	if (ft_isdigit(use_nptr[i]) == 0)
	{
		return (0);
	}
	else
	{
		while (use_nptr[i])
		{
			result_value = result_value * 10 + use_nptr[i] - '0';
			i++;
		}
		return (result_value);
	}
}
