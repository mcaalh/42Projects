/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <mravoavy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 11:46:26 by mravoavy          #+#    #+#             */
/*   Updated: 2014/11/19 11:46:32 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s, char const *s2)
{
	char	*str;
	int		i;

	i = 0;
	if (s && s2)
	{
		str = (char *)malloc(sizeof(str) * (int)(ft_strlen(s) + ft_strlen(s2)));
		if (str == NULL)
			return (NULL);
		while (i <= (int)(ft_strlen(s)))
		{
			str[i] = s[i];
			i++;
		}
		str = ft_strcat(str, s2);
		str[ft_strlen(s) + ft_strlen(s2)] = '\0';
		return (str);
	}
	else
		return (NULL);
}
