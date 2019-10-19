/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 14:45:14 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/17 14:27:09 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(char const *s)
{
	size_t	s_len;
	size_t	i;
	size_t	j;
	size_t	k;
	char	*new;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	i = ft_spray(s, 0);
	j = ft_rev_spray(s, 1, s_len);
	k = 0;
	if (i == s_len)
	{
		new = (char*)malloc(sizeof(char));
		new[0] = '\0';
		return (new);
	}
	if (!(new = (char*)malloc(sizeof(char) * (s_len - (i + j - 1) + 1))))
		return (NULL);
	while (i <= s_len - j)
		new[k++] = s[i++];
	new[k] = '\0';
	return (&new[0]);
}
