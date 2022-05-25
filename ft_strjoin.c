/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:16:17 by microdri          #+#    #+#             */
/*   Updated: 2022/05/17 08:54:21 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1)
		return (0);
	temp = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!temp)
		return (NULL);
	while (s1[i] != '\0')
	{
		temp[i] = ((char *)s1)[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		temp[i] = s2[j];
		i++;
		j++;
	}
	temp[i] = '\0';
	return (temp);
}
