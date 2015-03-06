/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <mravoavy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:27:57 by mravoavy          #+#    #+#             */
/*   Updated: 2014/11/07 16:28:02 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(char const *s, int c)
{
	int		i;
	int		i2;

	i2 = -1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i2 = i;
		i++;
	}
	if (i2 != -1)
		return ((char*)(s + i2));
	if (c == '\0')
		return ((char*)(s + i));
	return (NULL);
}
