/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 15:12:34 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/13 14:42:43 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char		*new;
	size_t		i;

	if (!(new = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		new[i] = '\0';
		i++;
	}
	new[size] = '\0';
	return (new);
}
