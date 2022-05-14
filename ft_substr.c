/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:28:54 by microdri          #+#    #+#             */
/*   Updated: 2022/05/14 14:19:45 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	int		i;

	temp = malloc(len + 1);
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (len)
	{
		temp[i] = s[start++];
		len--;
		i++;
	}
	return (temp);
}
