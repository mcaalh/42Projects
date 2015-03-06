/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravoavy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/06 10:31:21 by mravoavy          #+#    #+#             */
/*   Updated: 2015/03/06 10:31:25 by mravoavy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include "minilibx/mlx.h"
# include <fcntl.h>

# define KEY_LEFT 65361
# define KEY_UP 65362
# define KEY_RIGHT 65363
# define KEY_DOWN 65364
# define KEY_MULT 65450
# define KEY_PLUS 65451
# define KEY_MINUS 65453
# define KEY_DIV 65455
# define KEY_NUM_0 65456
# define KEY_NUM_1 65457
# define KEY_NUM_2 65458
# define KEY_NUM_3 65459
# define KEY_NUM_4 65460
# define KEY_NUM_5 65461
# define KEY_NUM_6 65462
# define KEY_NUM_7 65463
# define KEY_NUM_8 65464
# define KEY_NUM_9 65465

# define DB(x) ft_putendl(x)

typedef struct		s_env
{
	void			*mlx;
	void			*window;
	int				**tab;
	int				x_max;
	int				y_max;
	int				y;
	int				x;
	double			z;
	int				esp;
	int				color;
	int				color_res;
	double			zv;
	double			cst;
	int				t_x;
	int				t_y;
	double			x1;
	double			y1;
	double			x2;
	double			y2;
	double			s_x1;
	double			s_y1;
	double			s_x2;
	double			s_y2;
	int				i;
	double			dx;
	double			sx;
	double			dy;
	double			sy;
	double			err;
	double			e2;
}					t_env;

int					key_hook(int keycode, t_env *e);
int					mouse_hook(int button, int x, int y, t_env *e);
int					expose_hook(t_env *e);
void				draw(t_env *e);
void				draw_l(t_env *e);
int					**get_first_level(char *str, t_env *e);
void				iso_converter_x(t_env *e);
void				iso_converter_y(t_env *e);
void				ft_init(t_env *e);
int					error(int err);
void				ft_color(int keycode, t_env *e);

#endif
