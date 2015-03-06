/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/06 09:43:24 by mravoavy          #+#    #+#             */
/*   Updated: 2015/03/06 09:43:30 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		error(int err)
{
	if (err == 1)
		ft_putendl("Enter 1 map with '.fdf' extension");
	if (err == 2)
		ft_putendl("Enable to load mlx");
	if (err == 3)
		ft_putendl("File must have .fdf extension");
	if (err == 4)
		ft_putendl("File doesn't exist");
	exit(0);
}
