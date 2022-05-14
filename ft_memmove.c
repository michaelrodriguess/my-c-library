/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 08:26:01 by microdri          #+#    #+#             */
/*   Updated: 2022/05/14 11:36:13 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*csrc;
	char	*cdest;
	size_t	i;
	char	*temp;

	csrc = (char *)src;
	cdest = (char *)dest;
	temp = csrc;
	i = 0;
	while (i < n)
	{
		temp[i] = csrc[i];
		i++;
	}
	i = 0;
	while (csrc[i] && i < n)
	{
		cdest[i] = temp[i];
		i++;
	}
	return (cdest);
}
