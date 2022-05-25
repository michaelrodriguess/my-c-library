/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 14:26:31 by microdri          #+#    #+#             */
/*   Updated: 2022/05/25 13:23:38 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count == 0 || size == 0)
	{	
		count = 1;
		size = 1;
	}
	p = malloc(count * size);
	if (!p)
		return (NULL);
	if (p)
	{
		ft_bzero(p, count * size);
	}
	return (p);
}
