/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 11:07:53 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/20 16:29:16 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i;
			while (haystack[k] == needle[j] && haystack[k])
			{
				k++;
				j++;
			}
			if (!needle[j])
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
