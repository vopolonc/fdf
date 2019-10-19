/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 10:47:36 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/26 13:18:35 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen((char*)s);
	while (s[i] != c)
	{
		if (!i)
			return (NULL);
		i--;
	}
	return ((char*)&s[i]);
}
