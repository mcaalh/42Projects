/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/06 09:44:27 by mravoavy          #+#    #+#             */
/*   Updated: 2015/03/06 09:44:34 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_color(int keycode, t_env *e)
{
	if (keycode == 'r')
		e->color = 0xff0000;
	if (keycode == 'g')
		e->color = 0x00ff00;
	if (keycode == 'b')
		e->color = 0x0000ff;
	if (keycode == 's')
		e->color = 0x82d4fd;
	if (keycode == 'p')
		e->color = 0xffa5ee;
	if (keycode == 'w')
		e->color = 0xffffff;
	if (keycode == 'z')
		e->color = 0x000000;
	if (keycode == 'f')
		e->color = 0x62ff54;
	if (keycode == 'y')
		e->color = 0xf0ff00;
	if (keycode == 'o')
		e->color = 0xff972d;
}
