/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 13:31:36 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/26 13:31:06 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*n_dst;
	unsigned char	*n_src;
	int				j;

	n_dst = (unsigned char*)dst;
	n_src = (unsigned char*)src;
	i = 0;
	j = 0;
	while ((i < n) && j == 0)
	{
		if (n_src[i] == (unsigned char)c)
			j = 1;
		n_dst[i] = n_src[i];
		i++;
	}
	if (!j)
		return (NULL);
	dst = n_dst;
	return (dst + i);
}
