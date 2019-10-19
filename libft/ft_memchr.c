/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 13:32:27 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/26 13:30:33 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*arr;
	int				i;
	unsigned char	un_c;

	i = 0;
	un_c = (char)c;
	arr = (unsigned char*)s;
	while (n > 0)
	{
		if (arr[i] == un_c)
			return (&arr[i]);
		n--;
		i++;
	}
	return (NULL);
}
