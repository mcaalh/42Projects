/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <mravoavy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 17:44:41 by mravoavy          #+#    #+#             */
/*   Updated: 2014/11/18 17:44:44 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char*)src;
	while (n--)
	{
		if (*tmp == (unsigned char)c)
		{
			*(unsigned char*)dest++ = *tmp++;
			return (dest);
		}
		*(unsigned char*)dest++ = *tmp++;
	}
	return (NULL);
}
