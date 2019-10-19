/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:16:51 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/10 13:35:39 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t s_len;
	size_t d_len;

	s_len = ft_strlen((char*)src);
	d_len = ft_strlen((char*)dst);
	i = 0;
	j = 0;
	while (dst[i])
		i++;
	if (d_len > dstsize)
		return (s_len + dstsize);
	while (src[j] && dstsize - 1 > i)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (d_len + s_len);
}
