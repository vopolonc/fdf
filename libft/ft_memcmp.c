/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 13:31:55 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/05 12:48:12 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*f;
	unsigned char	*s;

	i = 0;
	f = (unsigned char*)s1;
	s = (unsigned char*)s2;
	while (i < n && f[i] == s[i])
		i++;
	if (i == n)
		return (0);
	return (f[i] - s[i]);
}
