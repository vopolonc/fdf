/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 11:54:52 by vopolonc          #+#    #+#             */
/*   Updated: 2019/03/24 13:01:20 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <mlx.h>
# include <math.h>
# include <fcntl.h>
# include "libft/libft.h"
# define ESC 53
# define W_WID 1000
# define W_HEI 2000
# define SH_X map->shift_x
# define SH_Y map->shift_y
# define SH_W map->shift_w
# define CORNER (x < W_WID && y < W_HEI && x > 0 && y > 0)

typedef struct		s_env
{
	float			pad;
	int				zoom;
	char			*addr;
	int				**matrix;
	int				rows;
	int				cols;
	int				start;
	int				first_x;
	int				first_y;
	int				step_x;
	int				step_y;
	int				wid_x;
	int				hei_y;
	int				shift_x;
	int				shift_y;
	int				shift_w;
	int				clr;
	int				bits;
	int				ls;
	int				endian;
	int				h;
	int				w;
	void			*mlx;
	void			*win;
	void			*win2;
	void			*i_p;
}					t_env;

typedef struct		s_point
{
	int				incx;
	int				incy;
	int				pdx;
	int				pdy;
	int				es;
	int				err;
	int				el;
	int				x;
	int				y;
	int				dx;
	int				dy;
	int				x0;
	int				y0;
	int				x1;
	int				y1;
}					t_point;

t_env				*reader(t_env *map, char *line, int fd);
t_env				*init_env2(t_env *map);
void				init_env(t_env *map, int pass);
void				mapper(t_env *map);
void				draw_funct(t_env *e, t_point *point);
void				draw_all(t_env *map);
void				init_const_steps(t_env *map);
void				changer(t_env *map, int x, int y);
void				fill_map(t_env *map, char **cur, int i);
void				draw_funct2(t_point *p);
void				call_key(int key, t_env *map);
int					destroy(void);
int					writer(t_env *map, char **av, int fd);
int					get_valid_line(t_env *map, char **cur);
int					key_hook(int key, t_env *map);
int					check_file(int fd);

#endif
