/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <mravoavy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:28:16 by mravoavy          #+#    #+#             */
/*   Updated: 2014/11/07 16:28:19 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *s, const char *s2, size_t n)
{
	size_t		i;
	size_t		i2;

	i = 0;
	i2 = 0;
	if (s == NULL || s2 == NULL)
		return (NULL);
	if (*s2 == '\0')
		return ((char *)s);
	while (s[i] != '\0' && n)
	{
		i2 = 0;
		while (s[i] == s2[i2] && ((s[i] != '\0') || (s2[i2] != '\0')) && n)
		{
			n--;
			i++;
			i2++;
		}
		if (s2[i2] == '\0')
			return ((char *)s + i - i2);
		n--;
		i = i - i2 + 1;
	}
	return (NULL);
}
