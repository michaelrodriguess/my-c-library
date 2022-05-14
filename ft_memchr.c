/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:27:42 by microdri          #+#    #+#             */
/*   Updated: 2022/05/14 12:07:06 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pointer_s;

	pointer_s = (unsigned char *) s;
	while (*pointer_s && n)
	{
		if (*pointer_s == c)
		{
			return (pointer_s);
		}
		pointer_s++;
		n--;
	}
	return (0);
}
