/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 15:34:07 by vopolonc          #+#    #+#             */
/*   Updated: 2019/01/22 15:09:51 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*arr;
	int		i;

	i = 0;
	if (!(arr = malloc(ft_strlen((char*)s1) + 1)))
		return (NULL);
	while (s1[i])
	{
		arr[i] = s1[i];
		i++;
	}
	arr[i++] = '\0';
	return (arr);
}
