/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <mravoavy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:22:00 by mravoavy          #+#    #+#             */
/*   Updated: 2014/11/18 18:29:12 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		i2;

	i = 0;
	if (s2[0] == '\0')
		return (char *)(s1);
	while (s1[i] != '\0')
	{
		i2 = 0;
		while (s1[i] == s2[i2])
		{
			i++;
			i2++;
			if ((s2[i2]) == '\0')
				return (char *)(&((s1[i - i2])));
		}
		i++;
		i = i - i2;
	}
	return (NULL);
}
