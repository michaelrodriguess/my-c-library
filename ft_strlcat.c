/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:05:28 by microdri          #+#    #+#             */
/*   Updated: 2022/06/15 11:17:28 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!*src)
		return (ft_strlen(dest));
	if (!size)
		return (ft_strlen(src));
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (*src && i < size - 1)
	{
		dest[i] = *src++;
		i++;
	}
	if (i > size - 1)
		return (ft_strlen(src) + size);
	dest[i] = '\0';
	return (i + ft_strlen(src));
}
