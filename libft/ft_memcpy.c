/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 13:32:14 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/26 13:19:02 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*n_dst;
	unsigned char	*n_src;
	size_t			i;

	i = 0;
	n_dst = (unsigned char*)dst;
	n_src = (unsigned char*)src;
	while (i < n)
	{
		n_dst[i] = n_src[i];
		i++;
	}
	dst = n_dst;
	return (n_dst);
}
