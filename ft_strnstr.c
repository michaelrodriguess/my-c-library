/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:24:14 by microdri          #+#    #+#             */
/*   Updated: 2022/05/24 13:33:04 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *str_tofind, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(str_tofind);
	if (str_tofind[i] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && len <= n)
	{
		if (!ft_memcmp(&str[i], str_tofind, len))
			return (&((char *) str)[i]);
		n--;
		i++;
	}
	return (NULL);
}
