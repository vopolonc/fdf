/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 08:55:18 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/13 13:59:12 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*new_one;

	if (!s || !(f))
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(s);
	new_one = (char *)malloc(sizeof(char) * len + 1);
	if (!new_one)
		return (NULL);
	while (i < len)
	{
		if (f(s[i]))
		{
			new_one[j] = f(s[i]);
			j++;
		}
		i++;
	}
	new_one[len] = '\0';
	return (&new_one[0]);
}
