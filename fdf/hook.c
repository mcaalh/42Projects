/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/06 09:45:17 by mravoavy          #+#    #+#             */
/*   Updated: 2015/03/06 09:45:20 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		key_zoom(int keycode, t_env *e)
{
	if (keycode == KEY_PLUS)
	{
		e->cst += 1;
		e->zv += 1;
	}
	if (keycode == KEY_MINUS)
		if (e->cst > 1)
		{
			e->cst -= 1;
			if (e->zv > 1)
				e->zv -= 1;
		}
}

void		key_z_var(int keycode, t_env *e)
{
	if (keycode == KEY_NUM_1)
		e->zv += 1;
	if (keycode == KEY_NUM_0)
		if (e->zv > 1)
			e->zv -= 1;
}

int			key_hook(int keycode, t_env *e)
{
	if ((keycode >= KEY_LEFT && keycode <= KEY_DOWN) \
		|| (keycode >= KEY_MULT && keycode <= KEY_NUM_9))
		mlx_clear_window(e->mlx, e->window);
	key_zoom(keycode, e);
	key_z_var(keycode, e);
	if (keycode == 65307)
		exit(0);
	if (keycode == KEY_UP)
		e->t_y -= 5;
	if (keycode == KEY_DOWN)
		e->t_y += 5;
	if (keycode == KEY_RIGHT)
		e->t_x += 5;
	if (keycode == KEY_LEFT)
		e->t_x -= 5;
	if (keycode >= 'a' && keycode <= 'z')
		ft_color(keycode, e);
	draw(e);
	return (0);
}

int			mouse_hook(int button, int x, int y, t_env *e)
{
	(void)e;
	return (0);
}

int			expose_hook(t_env *e)
{
	draw(e);
	return (0);
}
