/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 14:22:49 by vopolonc          #+#    #+#             */
/*   Updated: 2019/02/28 14:27:50 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_parse(char **s, char **line, int fd, int ret[2])
{
	char			*arr;
	size_t			i;

	i = 0;
	while (s[fd][i] && s[fd][i] != ret[1])
		i++;
	if (s[fd][i] == ret[1] && ret[0] != BUFF_SIZE)
	{
		*line = ft_strsub(s[fd], 0, i);
		arr = COPY(s[fd] + i + 1);
		F(s[fd]);
		s[fd] = arr;
		if (s[fd][0] == N)
			DEL(&s[fd]);
	}
	else if (s[fd][i] == N)
	{
		if (ret[0] == BUFF_SIZE)
			return (get_next_char(fd, line, ret[1]));
		*line = COPY(s[fd]);
		DEL(&s[fd]);
	}
	return (1);
}

int					get_next_char(const int fd, char **line, char c)
{
	static	char	*result[FD_LIMIT];
	char			*arr;
	char			buf[BUFF_SIZE + 1];
	int				ret[2];

	if (read(fd, 0, 0) < 0 || !line || fd < 0)
		return (E);
	ret[1] = c;
	while ((ret[0] = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret[0]] = N;
		if (!result[fd])
			result[fd] = COPY("");
		arr = ft_strjoin(result[fd], buf);
		F(result[fd]);
		result[fd] = arr;
		if (ft_strchr(buf, ret[1]))
			break ;
	}
	if (ret[0] < 0)
		return (E);
	if (!ret[0] && (!result[fd] || !*result[fd]))
		return (0);
	return (ft_parse(result, line, fd, ret));
}
