/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 15:31:10 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/26 13:39:22 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = -1;
	if (!ft_strlen((char*)needle))
		return ((char*)haystack);
	if (!(ft_strlen((char*)haystack) < ft_strlen((char*)needle)))
		while (haystack[++i] && i < len)
		{
			j = 0;
			if (haystack[i] == needle[j])
			{
				while (haystack[i + j] == needle[j] && (i + j) < len)
				{
					j++;
					if (!(needle[j]))
						return ((char*)&haystack[i]);
				}
			}
		}
	return (NULL);
}
