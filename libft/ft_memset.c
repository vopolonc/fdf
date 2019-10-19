/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 13:31:14 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/05 12:05:29 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*vdr;

	i = 0;
	vdr = (unsigned char *)b;
	while (i < len)
	{
		vdr[i] = c;
		i++;
	}
	return (vdr);
}
