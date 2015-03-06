/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <mravoavy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 11:54:04 by mravoavy          #+#    #+#             */
/*   Updated: 2014/11/26 11:57:00 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_mall(int i1, int i2)
{
	char *str;

	str = (i1 > i2) ? (char *)malloc((1 * sizeof(char *)))
		: (char *)malloc(sizeof(str) * (i2 - i1 + 2));
	return (str);
}

char	*ft_strtrim(char const *s)
{
	int		i1;
	int		i2;
	char	*str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	i2 = (int)ft_strlen(s) - 1;
	i1 = 0;
	while (s[i2] == ' ' || s[i2] == '\n' || s[i2] == '\t')
		i2--;
	while (s[i1] == ' ' || s[i1] == '\n' || s[i1] == '\t')
		i1++;
	str = ft_mall(i1, i2);
	if (str == NULL)
		return (NULL);
	while (i1 <= i2)
	{
		str[i] = s[i1];
		i1++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
