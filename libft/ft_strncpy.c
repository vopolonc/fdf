/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:26:35 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/03 15:03:08 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		if (src[i])
			dst[i] = src[i];
		else
			while (i < len)
				dst[i++] = '\0';
		i++;
	}
	return (dst);
}
