/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iso_converter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/06 09:45:41 by mravoavy          #+#    #+#             */
/*   Updated: 2015/03/06 09:48:49 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

double		z_trans(t_env *e, int z)
{
	e->z = (double)z;
	return (e->z);
}

void		iso_converter_x(t_env *e)
{
	e->s_x1 = e->cst * e->x1 - e->cst * e->y1;
	e->s_y1 = -((z_trans(e, e->tab[e->y][e->x])) * e->zv) \
				+ (e->cst) / 2 * e->x1 + (e->cst) / 2 * e->y1;
	e->s_x2 = e->cst * e->x2 - e->cst * e->y2;
	e->s_y2 = -((z_trans(e, e->tab[e->y][e->x - 1])) * e->zv) \
				+ (e->cst) / 2 * e->x2 + (e->cst) / 2 * e->y2;
	draw_l(e);
}

void		iso_converter_y(t_env *e)
{
	e->s_x1 = e->cst * e->x1 - e->cst * e->y1;
	e->s_y1 = -((z_trans(e, e->tab[e->y][e->x])) * e->zv) \
				+ (e->cst) / 2 * e->x1 + (e->cst) / 2 * e->y1;
	e->s_x2 = e->cst * e->x2 - e->cst * e->y2;
	e->s_y2 = -((z_trans(e, e->tab[e->y - 1][e->x])) * e->zv) \
				+ (e->cst) / 2 * e->x2 + (e->cst) / 2 * e->y2;
	draw_l(e);
}
