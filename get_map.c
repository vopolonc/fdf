/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 11:54:40 by vopolonc          #+#    #+#             */
/*   Updated: 2019/03/18 13:40:47 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_env			*init_env2(t_env *map)
{
	map = (t_env*)malloc(sizeof(t_env));
	map->start = 0;
	map->rows = 0;
	map->cols = 0;
	return (map);
}

void			fill_map(t_env *map, char **cur, int i)
{
	int			j;

	j = -1;
	map->matrix[i] = (int*)malloc(sizeof(int) * map->start);
	while (cur[++j])
		map->matrix[i][j] = (short)ft_atoi(cur[j]);
}

int				get_valid_line(t_env *map, char **cur)
{
	int			i;
	int			j;

	j = 0;
	i = -1;
	if (!map->start)
	{
		while (cur[++i])
			map->start++;
		if (map->start < 1)
			return (-1);
		return (1);
	}
	else if (map->start > 0)
		while (cur[++i])
			j++;
	if (j == map->start)
		map->cols += j;
	else
	{
		ft_free_2d_v2(cur);
		return (-1);
	}
	return (1);
}

int				writer(t_env *map, char **av, int fd)
{
	char		**cur;
	char		*line;
	int			i;

	i = 0;
	cur = NULL;
	line = NULL;
	fd = open(av[1], O_RDONLY);
	init_env(map, 1);
	map->matrix = (int**)malloc(sizeof(int*) * map->rows);
	while (get_next_line(fd, &line) > 0)
	{
		cur = ft_strsplit(line, ' ');
		fill_map(map, cur, i++);
		ft_strdel(&line);
		ft_free_2d_v2(cur);
	}
	mapper(map);
	return (0);
}

t_env			*reader(t_env *map, char *line, int fd)
{
	char		**cur;

	cur = NULL;
	while (get_next_line(fd, &line) > 0)
	{
		if (!(cur = ft_strsplit(line, ' ')))
		{
			ft_strdel(&line);
			free(map);
			return (NULL);
		}
		if (get_valid_line(map, cur) == -1)
		{
			free(map);
			ft_strdel(&line);
			return (NULL);
		}
		ft_free_2d(cur, map->start);
		ft_strdel(&line);
		map->rows++;
	}
	if (map->cols > 0 && map->rows > 0)
		return (map);
	free(map);
	return (NULL);
}
