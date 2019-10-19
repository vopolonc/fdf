/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fchrr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 12:19:07 by vopolonc          #+#    #+#             */
/*   Updated: 2019/03/16 12:33:29 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_fchrr(char *src, int chr, int pres)
{
	char		*dst;
	size_t		i;
	size_t		j;

	i = -1;
	j = -1;
	dst = (char*)malloc(sizeof(char) + (strlen(src) + pres + 1));
	while (++i < strlen(src))
		dst[i] = src[i];
	while (++j < (size_t)pres)
		dst[i++] = chr;
	dst[i + 1] = '\0';
	ft_strdel(&src);
	free(src);
	return (dst);
}
