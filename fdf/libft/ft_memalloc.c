/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <mravoavy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 12:20:24 by mravoavy          #+#    #+#             */
/*   Updated: 2014/11/10 12:20:43 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*d;
	int		i;

	i = 0;
	d = malloc(size);
	if (d == NULL)
		return (NULL);
	while (i <= (int)size)
	{
		d[i] = 0;
		i++;
	}
	return (d);
}
