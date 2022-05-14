/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:16:48 by microdri          #+#    #+#             */
/*   Updated: 2022/05/14 14:29:07 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	size_t	start;
	size_t	s1_end;
	char	*temp;
	int		c;

	c = 0;
	start = 0;
	i = 0;
	s1_end = ft_strlen(s1);
		j = 0;
	while (set[j])
	{	
		if (s1[i] == set[j])
		{
			start = start + 1;
			i++;
			j--;
		}
		j++;
		if (set[j] == '\0')
			break ;
	}
	j = 0;
	while (s1_end > start)
	{
		if (s1[s1_end - 1] == set[j])
		{
			s1_end = s1_end - 1;
			j--;
		}
		j++;
		if (set[j] == '\0')
			break ;
	}
	temp = malloc((s1_end - start) + 1);
	while (start < s1_end)
	{
		temp[c] = s1[start];
		start++;
		c++;
	}
	temp[c] = '\0';
	return (temp);
}
