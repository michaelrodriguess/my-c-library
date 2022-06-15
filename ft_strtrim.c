/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:16:48 by microdri          #+#    #+#             */
/*   Updated: 2022/05/30 15:26:04 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, const char *set)
{
	while (*set && c != *set)
		set++;
	if (c == *set)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{	
	int	len_s1;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_isset(*s1, set))
		s1++;
	len_s1 = ft_strlen(s1);
	while (len_s1 && ft_isset(s1[len_s1], set))
		len_s1--;
	return (ft_substr(s1, 0, len_s1 + 1));
}
