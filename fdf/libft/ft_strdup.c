/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <mravoavy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:56:31 by mravoavy          #+#    #+#             */
/*   Updated: 2014/11/05 11:39:09 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *src)
{
	char	*c;
	int		i;

	i = 0;
	c = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (c != NULL)
	{
		while (src[i])
		{
			c[i] = src[i];
			i++;
		}
		c[i] = '\0';
		return (c);
	}
	else
		return (NULL);
}
