/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_numb_len.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 14:18:29 by vopolonc          #+#    #+#             */
/*   Updated: 2019/03/16 12:31:37 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long		ft_get_numb_len(long long i)
{
	long long	j;

	j = 1;
	while ((i = i / 10) > 0)
		j++;
	return (j);
}
