/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 10:40:06 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/05 14:09:22 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count] != c)
	{
		if (s[count] == '\0')
			return (0);
		count++;
	}
	return ((char*)&s[count]);
}
