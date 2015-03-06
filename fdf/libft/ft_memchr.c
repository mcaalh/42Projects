/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mechr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <mravoavy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:39:02 by mravoavy          #+#    #+#             */
/*   Updated: 2014/12/01 17:18:02 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	if (!s)
		return (NULL);
	tmp = (unsigned char*)s;
	while (n--)
	{
		if (tmp[i] == (unsigned char)c)
			return ((void*)&tmp[i]);
		i++;
	}
	return (NULL);
}
