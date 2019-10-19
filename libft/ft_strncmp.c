/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:06:22 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/15 13:29:49 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*f;
	unsigned char	*s;

	i = -1;
	f = (unsigned char*)s1;
	s = (unsigned char*)s2;
	while (++i < n && f[i] == s[i] && f[i])
		;
	if (i == n || (!f[i] && !s[i]))
		return (0);
	return (f[i] - s[i]);
}
