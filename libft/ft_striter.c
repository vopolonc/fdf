/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:01:44 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/13 13:25:06 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t			len;
	unsigned int	i;

	if (!s || !(f))
		return ;
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		f(&s[i]);
		i++;
	}
}
