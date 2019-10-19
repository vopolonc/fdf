/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 13:31:25 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/15 15:00:09 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*n_src;
	char	*n_dst;
	size_t	i;

	i = -1;
	n_src = (char*)src;
	n_dst = (char*)dst;
	if (n_src < n_dst)
		while ((int)(--len) >= 0)
			n_dst[len] = n_src[len];
	else
		while (++i < len)
			n_dst[i] = n_src[i];
	return (dst);
}
