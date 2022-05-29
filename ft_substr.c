/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:28:54 by microdri          #+#    #+#             */
/*   Updated: 2022/05/29 14:01:14 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	int		i;

	if (!s)
		return (0);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	if (start > len)
		return (ft_strdup(""));
	temp = malloc((len + 1) * sizeof(char));
	if (temp == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (temp);
	i = 0;
	while (len > 0)
	{
		temp[i++] = s[start++];
		len--;
	}
	temp[i] = '\0';
	return (temp);
}
