/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:13:16 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/15 15:16:50 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	while (*s1 && *s2)
		if (*s1++ != *s2++)
			return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else
		return (0);
}
