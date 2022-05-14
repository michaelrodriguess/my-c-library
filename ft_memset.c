/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 08:51:01 by microdri          #+#    #+#             */
/*   Updated: 2022/05/14 10:32:02 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*convert_to_char;

	convert_to_char = (unsigned char *) s;
	while (n > 0)
	{
		*convert_to_char = c;
		convert_to_char++;
		n--;
	}
	return (s);
}
