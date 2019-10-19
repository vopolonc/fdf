/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 15:57:47 by vopolonc          #+#    #+#             */
/*   Updated: 2019/03/19 16:29:27 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		destroy(void)
{
	system("say GOOD BYE and GOOD LUCK");
	exit(1);
	return (0);
}

int		key_hook(int key, t_env *map)
{
	if (key == 53)
	{
		system("say GOOD BYE and GOOD LUCK");
		exit(1);
	}
	SH_W = 1;
	(key == 15) ? init_env(map, 0) : 0 == 0;
	(key == 116) ? map->pad += 0.015 : 0 == 0;
	(key == 121) ? map->pad -= 0.015 : 0 == 0;
	(key == 123 && SH_X < 50) ? SH_X += 1 : 0 == 0;
	(key == 124 && SH_X > -80) ? SH_X -= 1 : 0 == 0;
	(key == 125 && SH_Y < 20) ? SH_Y += 1 : 0 == 0;
	(key == 126 && SH_Y > -80) ? SH_Y -= 1 : 0 == 0;
	call_key(key, map);
	mlx_clear_window(map->mlx, map->win);
	draw_all(map);
	return (0);
}

void	call_key(int key, t_env *map)
{
	if (key == 43)
	{
		if (map->clr < 0 && map->clr < 2500000)
			map->clr += 50000000;
		else
			map->clr -= 250000;
	}
	if (key == 0)
	{
		SH_X = 50;
		SH_Y = -10;
	}
	if (key == 1)
	{
		SH_W = 0;
	}
	if (key == 2)
	{
		SH_X = -20;
		SH_Y = 15;
	}
}
