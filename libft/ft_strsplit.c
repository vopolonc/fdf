/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 12:56:52 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/15 15:25:12 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	btw_symbol(char *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (!s[i])
			break ;
		while (s[i] != c && s[i])
			i++;
		j++;
	}
	return (j);
}

static int	get_len(char *s, char c, int word)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (word > 0)
	{
		j = 0;
		while (s[i] == c && s[i])
			i++;
		if (!s[i])
			break ;
		while (s[i] != c && s[i])
		{
			i++;
			j++;
		}
		word--;
	}
	return (j);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		temp;
	char	**new;

	i = 0;
	j = 0;
	temp = 0;
	if (!s || ft_strlen((char*)s) == 0)
		return (NULL);
	if (!(new = (char**)malloc(sizeof(char*) * btw_symbol((char*)s, c) + 1)))
		return (NULL);
	while (temp < btw_symbol((char*)s, c))
	{
		j = 0;
		new[temp] = (char*)malloc(sizeof(char) *
							get_len((char*)s, c, temp + 1) + 1);
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			new[temp][j++] = s[i++];
		new[temp++][j] = '\0';
	}
	new[temp] = 0;
	return (new);
}
