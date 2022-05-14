/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:24:58 by microdri          #+#    #+#             */
/*   Updated: 2022/05/14 11:49:03 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{	
	char	*temp;

	temp = (char *) s;
	while (*temp)
	{
		if (*temp == c)
		{	
			return (temp);
		}	
		temp++;
	}
	return (0);
}
