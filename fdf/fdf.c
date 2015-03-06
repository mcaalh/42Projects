/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/06 09:43:58 by mravoavy          #+#    #+#             */
/*   Updated: 2015/03/06 09:44:04 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			main(int argc, char **argv)
{
	t_env	e;

	ft_init(&e);
	e.mlx = mlx_init();
	if (argc != 2)
		error(1);
	if (!e.mlx)
		error(2);
	if (ft_strstr(argv[1], ".fdf") == 0)
		error(3);
	e.tab = get_first_level(argv[1], &e);
	if (!e.tab)
		error(4);
	e.window = mlx_new_window(e.mlx, 2500, 1300, "FdF");
	mlx_expose_hook(e.window, expose_hook, &e);
	mlx_hook(e.window, 2, 3, key_hook, &e);
	mlx_mouse_hook(e.window, mouse_hook, &e);
	mlx_loop(e.mlx);
	return (0);
}
