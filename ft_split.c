/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:31:02 by microdri          #+#    #+#             */
/*   Updated: 2022/05/14 14:34:21 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**matriz;
	int		col;
	int		line;
	int		temp;

	col = 0;
	line = 0;
	temp = 0;
	matriz = malloc(ft_strlen(s) * sizeof(char *));
	if (!matriz)
		return (NULL);
	while (s[col])
	{
		if (s[col] == c)
		{	
			matriz[line] = malloc(col - temp + 1);
			if (!matriz[line])
				return (NULL);
			ft_strlcpy(matriz[line], s + temp, col - temp + 1);
			temp = col + 1;
			line++;
		}
		else if (s[col + 1] == '\0')
		{
			matriz[line] = malloc(col - temp + 1);
			if (!matriz[line])
				return (NULL);
			ft_strlcpy(matriz[line], s + temp, col - temp + 2);
			temp = col + 1;
			line++;
		}		
		col++;
	}
	return (matriz);
}
