/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <mravoavy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:39:56 by mravoavy          #+#    #+#             */
/*   Updated: 2014/11/07 11:40:02 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	unsigned char	*buffer;

	temp1 = dest;
	temp2 = (unsigned char *)src;
	buffer = (unsigned char *)malloc(sizeof(*buffer
			* (int)ft_strlen((char *)temp1)));
	if (buffer == NULL)
		return (NULL);
	buffer = ft_memcpy(buffer, temp2, n);
	temp1 = ft_memcpy(temp1, buffer, n);
	return (dest);
}
