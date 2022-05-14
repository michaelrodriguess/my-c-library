/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 08:54:16 by microdri          #+#    #+#             */
/*   Updated: 2022/05/14 11:52:24 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	int		len;

	len = 0;
	temp = (char *) s;
	while (*temp)
	{
		temp++;
		len++;
	}
	while (len > 0)
	{
		if (*temp == c)
		{
			return (temp);
		}
		temp--;
	}
	return (0);
}
