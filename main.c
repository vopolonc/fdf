/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 12:51:38 by vopolonc          #+#    #+#             */
/*   Updated: 2019/03/19 16:27:02 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			init_const_steps(t_env *map)
{
	if (map->rows < 30)
	{
		map->step_x = 30 + SH_X;
		map->step_y = 30 + SH_Y;
		map->wid_x = 10 * SH_W;
	}
	else if (map->rows < 100)
	{
		map->step_x = 10 + SH_X;
		map->step_y = 10 + SH_Y;
		map->wid_x = 3;
	}
	else if (map->rows >= 100)
	{
		map->step_x = SH_X + 7;
		map->step_y = SH_Y + 6;
		map->wid_x = 1;
	}
	(SH_W) ? (map->wid_x *= 1) : (map->wid_x *= 0);
}

void			init_env(t_env *e, int pass)
{
	e->hei_y = 1;
	e->zoom = 1;
	e->pad = 1;
	e->shift_x = 0;
	e->shift_y = 0;
	e->clr = 23000000;
	if (pass)
	{
		e->h = 0;
		e->w = 0;
		e->wid_x = 1;
		e->first_x = 0;
		e->first_y = 0;
		e->step_x = 0;
		e->step_y = 0;
		e->mlx = mlx_init();
		e->win = mlx_new_window(e->mlx, W_HEI, W_WID, "fdf");
		e->win2 = mlx_new_window(e->mlx, 400, 1000, "info");
		e->i_p = mlx_xpm_file_to_image(e->mlx, "pict.xpm", &e->h, &e->w);
		e->addr = mlx_get_data_addr(e->i_p, &e->bits, &e->ls, &e->endian);
		mlx_put_image_to_window(e->mlx, e->win2, e->i_p, 0, 0);
	}
}

int				check_file(int fd)
{
	if (fd == -1 || read(fd, 0, 0) < 0)
	{
		ft_putstr("empty file or it's directory\n");
		return (0);
	}
	return (1);
}

int				main(int ac, char **av)
{
	int			fd;
	char		*line;
	t_env		*map;

	map = NULL;
	map = init_env2(map);
	line = ft_strnew(1);
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (!(check_file(fd)))
			return (-1);
		map = reader(map, line, fd);
		(map) ? writer(map, av, fd) : ft_putstr("err\n");
	}
	else
		ft_putstr("Must be only 1 file\n");
	free(map);
	return (0);
}
