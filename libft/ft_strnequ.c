/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:31:49 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/15 15:18:24 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] && s2[i] && n > 0)
	{
		if (s1[i] != s2[i])
			return (0);
		n--;
		i++;
	}
	if (n == 0 || (!(s1[i]) && !(s2[i])))
		return (1);
	return (0);
}
