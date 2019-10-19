/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 14:35:56 by vopolonc          #+#    #+#             */
/*   Updated: 2019/02/04 14:44:49 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_pow(long long numb, int base, int times)
{
	while (times-- && (numb *= base))
		;
	return (numb);
}
