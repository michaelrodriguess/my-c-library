/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:41:45 by microdri          #+#    #+#             */
/*   Updated: 2022/05/14 14:47:22 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char			*use_s;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	use_s = ft_strdup(s);
	i = 0;
	while (s[i])
	{
		use_s[i] = (*f)(i, use_s[i]);
		i++;
	}
	return (use_s);
}
