/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:06:36 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/14 20:50:01 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	size_t			i;
	size_t			len;

	if (!(f) || !s)
		return (NULL);
	i = 0;
	len = ft_strlen((char*)s);
	if (!(new = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[len] = '\0';
	return (&new[0]);
}
