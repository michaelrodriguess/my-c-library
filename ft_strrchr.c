/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 08:54:16 by microdri          #+#    #+#             */
/*   Updated: 2022/05/24 13:37:02 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	int		size;

	temp = (char *) s;
	size = ft_strlen(s);
	while (size >= 0)
	{
		if (temp[size] == (char) c)
		{
			return (temp + size);
		}
		size--;
	}
	return (0);
}
