/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:47:25 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/15 15:19:38 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*new_one;

	if (!s)
		return (NULL);
	i = start;
	j = 0;
	if (!(new_one = (char *)malloc(sizeof(char) * (len) + 1)))
		return (NULL);
	while (len > 0)
	{
		new_one[j] = (char)s[i];
		i++;
		j++;
		len--;
	}
	new_one[j] = '\0';
	return (&new_one[0]);
}
