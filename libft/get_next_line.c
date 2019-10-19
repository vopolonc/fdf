/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 14:30:31 by vopolonc          #+#    #+#             */
/*   Updated: 2019/02/27 12:15:09 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_parse(char **s, char **line, int fd, int ret)
{
	char	*arr;
	size_t	i;

	i = 0;
	while (s[fd][i] && s[fd][i] != NL)
		i++;
	if (s[fd][i] == NL)
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
		if (ret == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = COPY(s[fd]);
		DEL(&s[fd]);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static	char	*result[FD_LIMIT];
	char			*arr;
	char			buf[BUFF_SIZE + 1];
	int				ret;

	if (read(fd, 0, 0) < 0 || !line || fd < 0)
		return (E);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = N;
		if (!result[fd])
			result[fd] = COPY("");
		arr = ft_strjoin(result[fd], buf);
		F(result[fd]);
		result[fd] = arr;
		if (ft_strchr(buf, NL))
			break ;
	}
	if (ret < 0)
		return (E);
	if (!ret && (!result[fd] || !*result[fd]))
		return (0);
	return (ft_parse(result, line, fd, ret));
}
