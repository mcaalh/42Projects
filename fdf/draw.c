/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/06 09:42:55 by mravoavy          #+#    #+#             */
/*   Updated: 2015/03/06 09:43:07 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		ft_point_x(t_env *e)
{
	e->x1 = e->x * e->esp;
	e->y1 = e->y * e->esp;
	e->x2 = e->x * e->esp - e->esp;
	e->y2 = e->y * e->esp;
}

void		ft_point_y(t_env *e)
{
	e->x1 = e->x * e->esp;
	e->y1 = e->y * e->esp;
	e->x2 = e->x * e->esp;
	e->y2 = e->y * e->esp - e->esp;
}

void		draw(t_env *e)
{
	e->y = 0;
	while (e->y < e->y_max)
	{
		e->x = 0;
		while (e->x < e->x_max)
		{
			if (e->x > 0)
			{
				ft_point_x(e);
				iso_converter_x(e);
			}
			if (e->y > 0)
			{
				ft_point_y(e);
				iso_converter_y(e);
			}
			e->x++;
		}
		e->y++;
	}
}

void		draw_l(t_env *e)
{
	e->dx = abs(e->s_x2 - e->s_x1);
	e->sx = e->s_x1 < e->s_x2 ? 1 : -1;
	e->dy = abs(e->s_y2 - e->s_y1);
	e->sy = e->s_y1 < e->s_y2 ? 1 : -1;
	e->err = (e->dx > e->dy ? e->dx : -e->dy) / 2;
	while (e->s_x1 != e->s_x2 || e->s_y1 != e->s_y2)
	{
		mlx_pixel_put(e->mlx, e->window, (int)e->s_x1 + e->t_x, \
								(int)e->s_y1 + e->t_y, e->color);
		e->e2 = e->err;
		if (e->e2 > -e->dx)
		{
			e->err -= e->dy;
			e->s_x1 += e->sx;
		}
		if (e->e2 < e->dy)
		{
			e->err += e->dx;
			e->s_y1 += e->sy;
		}
	}
}
