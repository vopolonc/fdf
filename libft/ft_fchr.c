/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 12:17:50 by vopolonc          #+#    #+#             */
/*   Updated: 2019/01/30 12:17:51 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_fchr(char *src, int chr, int pres)
{
	char		*dst;
	size_t		i;
	size_t		j;
	size_t		len;

	i = -1;
	j = -1;
	len = ft_strlen(src);
	dst = (char*)malloc(sizeof(char) * (ft_strlen(src) + pres + 1));
	while (++j < (size_t)pres)
		dst[j] = chr;
	while (++i < len)
		dst[j++] = src[i];
	dst[j++] = '\0';
	ft_strdel(&src);
	free(src);
	return (dst);
}
