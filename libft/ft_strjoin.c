/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 14:28:16 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/15 15:19:23 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	temp;
	size_t	i;
	size_t	j;
	size_t	s1_len;
	char	*new;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	temp = 0;
	s1_len = ft_strlen((char *)s1);
	if (!(new = (char *)malloc(sizeof(char) * (s1_len + ft_strlen(s2)) + 1)))
		return (NULL);
	while ((temp < (s1_len + ft_strlen(s2))) && i < s1_len)
		new[temp++] = (char)s1[i++];
	while ((temp < (s1_len + ft_strlen(s2)) && j < ft_strlen(s2)))
		new[temp++] = (char)s2[j++];
	new[temp] = '\0';
	return (&new[0]);
}
