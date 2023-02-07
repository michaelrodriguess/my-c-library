/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:25:21 by microdri          #+#    #+#             */
/*   Updated: 2023/02/07 14:56:25 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_s1;
	unsigned char	*p_s2;
	unsigned int	i;

	p_s1 = (unsigned char *) s1;
	p_s2 = (unsigned char *) s2;
	i = 0;
	if (n != 0)
	{	
		while (i < n)
		{
			if (p_s1[i] != p_s2[i])
			{
				return ((unsigned char)(p_s1[i]) - (unsigned char)(p_s2[i]));
			}
			i++;
		}
	}
	return (0);
}
