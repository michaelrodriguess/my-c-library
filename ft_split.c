/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:48:59 by microdri          #+#    #+#             */
/*   Updated: 2022/05/30 17:04:21 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char sep)
{
	int		count;
	int		w_found;

	count = 0;
	w_found = 0;
	while (*s)
	{
		if (*s != sep && w_found == 0)
		{
			count++;
			w_found = 1;
		}
		else if (*s == sep)
		{
			w_found = 0;
		}
		s++;
	}
	return (count);
}

static int	ft_len_word(char const *s, char sep)
{
	int	len_s;

	len_s = 0;
	while (*s)
	{
		if (*s != sep)
		{
			len_s++;
			s++;
		}
		else
			break ;
	}
	return (len_s);
}

char	**ft_split(char const *str, char c)
{
	char	**matriz;
	char	*s;
	int		count;

	if (!str)
		return (NULL);
	s = (char *) str;
	count = 0;
	matriz = malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!matriz)
		return (NULL);
	while (*s)
	{	
		if (*s == c)
			s++;
		else
		{
			matriz[count] = ft_substr(s, 0, ft_len_word(s, c));
			s = s + ft_len_word(s, c);
			count++;
		}
	}
	matriz[count] = NULL;
	return (matriz);
}
