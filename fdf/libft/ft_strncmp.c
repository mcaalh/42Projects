/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <mravoavy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:35:08 by mravoavy          #+#    #+#             */
/*   Updated: 2014/12/03 10:12:04 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	if (!n)
		return (0);
	i = 0;
	if (*s1 == '\200' && *s2 == '\0')
		return (1);
	while (s1 && s2 && i < n)
	{
		if (!(*s1 || *s2) || (*s1 != *s2))
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}
