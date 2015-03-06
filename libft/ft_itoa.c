/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <mravoavy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 11:10:51 by mravoavy          #+#    #+#             */
/*   Updated: 2014/11/26 11:10:54 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoaext(void)
{
	int		n;
	int		i;
	char	*str;

	n = 2147483647;
	i = 11;
	str = (char *)malloc(sizeof(char) * i);
	str[0] = '-';
	str[i--] = '\0';
	while (n != 0)
	{
		str[i--] = '0' + (n % 10);
		n = n / 10;
	}
	str[10]++;
	return (str);
}

static int	ft_size(int n)
{
	int		temp;
	int		i2;

	i2 = 0;
	temp = n;
	while (temp != 0)
	{
		temp = temp / 10;
		i2++;
	}
	return (i2);
}

char		*ft_itoa(int n)
{
	int		i;
	char	*str;

	if (n == -2147483648)
		return (ft_itoaext());
	i = ft_size(n);
	if (n <= 0)
		i++;
	str = (char *)malloc(sizeof(char) * i);
	str[0] = (n >= 0) ? '0' : '-';
	str[i--] = '\0';
	n = (n < 0) ? -n : n;
	while (n != 0)
	{
		str[i--] = '0' + (n % 10);
		n = n / 10;
	}
	return (str);
}
