/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:57:20 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/26 13:20:34 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int					ft_return_res(unsigned long long n, int sign)
{
	if (n > 9223372036854775807U && sign == 1)
		return (-1);
	if (n > 9223372036854775808U && sign == -1)
		return (0);
	else
		return ((int)n * sign);
}

int							ft_atoi(const char *str)
{
	int						i;
	unsigned long long		n;
	int						sign;

	i = ft_skip(str);
	n = 0;
	sign = 1;
	if (str[i] == '-')
		sign *= -1;
	((str[i] == '-' || str[i] == '+') ? i++ : i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	return (ft_return_res(n, sign));
}
