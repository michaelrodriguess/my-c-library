/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:24:58 by microdri          #+#    #+#             */
/*   Updated: 2022/05/16 16:38:18 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{	
	char	*temp;

	temp = (char *) s;
	while (*temp != (char) c)
	{
		if (*temp == '\0')
			return (0);
		temp++;
	}
	return (temp);
}
