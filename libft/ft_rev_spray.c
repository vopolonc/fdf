/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_spray.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 14:25:09 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/17 14:25:30 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_rev_spray(char const *s, size_t j, size_t s_len)
{
	while (s[s_len - j] == ' ' || s[s_len - j] == '\n' || s[s_len - j] == '\t')
		j++;
	return (j);
}
