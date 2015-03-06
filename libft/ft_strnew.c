/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <mravoavy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 12:18:59 by mravoavy          #+#    #+#             */
/*   Updated: 2014/11/10 12:19:30 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*d;

	d = NULL;
	if (size != '0')
		d = (char *)malloc(sizeof(*d) * size + 1);
	if (d == NULL)
		return (NULL);
	while (size--)
		d[(int)size] = '\0';
	return (d);
}
