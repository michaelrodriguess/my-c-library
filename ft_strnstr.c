/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:24:14 by microdri          #+#    #+#             */
/*   Updated: 2022/05/14 14:01:41 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *str_tofind, size_t n)
{
	int		i;
	int		j;

	i = 0;
	if (str_tofind[i] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && n)
	{
		j = 0;
		if (str[i] == str_tofind[j])
		{
			j = 0;
			while (str_tofind[j] && str_tofind[j] == str[i + j])
			{
				if (str_tofind[j + 1] == '\0')
					return (&((char *)str)[i]);
				j++;
			}
		}
		i++;
		n--;
	}
	return (0);
}
