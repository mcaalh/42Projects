/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <mravoavy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 11:18:01 by mravoavy          #+#    #+#             */
/*   Updated: 2014/11/26 11:18:06 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_new_string(int size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	return (str);
}

static int	ft_countlet(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 1;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static int	ft_countstr(char const *s, char c)
{
	int		i;
	int		compt;

	i = 0;
	compt = 1;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i - 1] == c)
			compt++;
		i++;
	}
	return (compt);
}

static int	ft_strsplit_2nd(char **tab, int i4, char const *s, char c)
{
	int		i;
	int		i3;

	i = 0;
	i3 = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c) && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			tab[i4 + 1] = ft_new_string(ft_countlet(s, c));
			tab[i4++][i3++] = s[i++];
			tab[i4 - 1][i3] = '\0';
			i3 = 0;
		}
		else if (s[i] != c)
			tab[i4][i3++] = s[i++];
		else if (s[i] == c)
			i++;
	}
	return (i4);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i4;
	char	**tab;

	if (!s)
		return (NULL);
	i4 = 0;
	tab = (char **)malloc(sizeof(char *) * ft_countstr(s, c) + 1);
	if (tab == NULL)
	{
		tab = (char **)malloc(sizeof(char*) * 2);
		tab[0] = ft_strnew(1);
		tab[1] = NULL;
	}
	tab[0] = ft_new_string(ft_countlet(s, c));
	i4 = ft_strsplit_2nd(tab, i4, s, c);
	tab[i4] = '\0';
	return (tab);
}
