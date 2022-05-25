/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:00:56 by microdri          #+#    #+#             */
/*   Updated: 2022/05/17 16:29:44 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{	
	char	*use_s;
	char	*p_dest;

	use_s = (char *) s;
	p_dest = (char *)malloc((ft_strlen(use_s) + 1) * (sizeof(char)));
	if (p_dest != NULL)
		ft_strcpy(p_dest, use_s);
	return (p_dest);
}
