/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:05:28 by microdri          #+#    #+#             */
/*   Updated: 2022/05/14 14:17:11 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	len;
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	len = ft_strlen(src);
	while (dest[i] && size)
	{
		size--;
		i++;
	}
	while (src[i] && size > 1)
	{
		dest[i + j] = src[j];
		size--;
		j++;
	}	
	if (size == 1)
	{
		dest[i + j] = '\0';
	}
	return (i + j);
}
