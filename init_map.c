/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 15:21:33 by vopolonc          #+#    #+#             */
/*   Updated: 2019/03/19 16:28:47 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		draw_funct2(t_point *p)
{
	p->dx = p->x1 - p->x0;
	p->dy = p->y1 - p->y0;
	p->incx = ft_sign(p->dx);
	p->incy = ft_sign(p->dy);
	if (p->dx < 0)
		p->dx = -p->dx;
	if (p->dy < 0)
		p->dy = -p->dy;
	if (p->dx > p->dy)
	{
		p->pdx = p->incx;
		p->pdy = 0;
		p->es = p->dy;
		p->el = p->dx;
	}
	else
	{
		p->pdx = 0;
		p->pdy = p->incy;
		p->es = p->dx;
		p->el = p->dy;
	}
	p->x = p->x0;
	p->y = p->y0;
	p->err = p->el / 2;
}

void		draw_funct(t_env *e, t_point *p)
{
	int		t;

	t = 0;
	draw_funct2(p);
	mlx_pixel_put(e->mlx, e->win, p->x, p->y, e->clr);
	while (t < p->el)
	{
		p->err -= p->es;
		if (p->err < 0)
		{
			p->err += p->el;
			p->x += p->incx;
			p->y += p->incy;
		}
		else
		{
			p->x += p->pdx;
			p->y += p->pdy;
		}
		mlx_pixel_put(e->mlx, e->win, p->x, p->y, e->clr);
		t++;
	}
}

void		changer(t_env *map, int x, int y)
{
	t_point	*p;

	p = (t_point*)malloc(sizeof(t_point));
	p->x0 = map->first_x + (x * map->step_x) - (y * map->wid_x);
	p->y0 = map->first_y + (y * map->step_y) -
		(map->matrix[y][x] * map->hei_y);
	if (x < map->start - 1)
	{
		p->x1 = map->first_x + ((x + 1) * map->step_x) -
			(y * map->wid_x);
		p->y1 = map->first_y + (y * map->step_y) -
		(map->matrix[y][x + 1] * map->hei_y);
		draw_funct(map, p);
	}
	if (y < map->rows - 1)
	{
		p->x1 = map->first_x + (x * map->step_x) -
			((y + 1) * map->wid_x);
		p->y1 = map->first_y + ((y + 1) * map->step_y) -
			(map->matrix[y + 1][x] * map->hei_y);
		draw_funct(map, p);
	}
	free(p);
}

void		draw_all(t_env *map)
{
	int		x;
	int		y;

	init_const_steps(map);
	y = -1;
	map->first_x = (map->pad * ((W_WID) - ((map->step_x *
												map->start) / 2) + 100));
	map->first_y = (map->pad * ((W_HEI / 4) - ((map->step_y *
												map->rows) / 2)));
	map->hei_y = 3;
	while (++y < map->rows && (x = -1))
	{
		while (++x < map->start)
			changer(map, x, y);
	}
}

void		mapper(t_env *map)
{
	draw_all(map);
	mlx_hook(map->win, 17, 0, destroy, NULL);
	mlx_key_hook(map->win, key_hook, map);
	mlx_loop(map->mlx);
}
