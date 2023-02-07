/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:27:42 by microdri          #+#    #+#             */
/*   Updated: 2023/02/07 14:56:15 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pointer_s;
	size_t			i;

	pointer_s = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (pointer_s[i] == (unsigned char) c)
		{
			return ((void *)&s[i]);
		}
		i++;
	}
	return (NULL);
}