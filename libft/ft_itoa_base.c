/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 14:52:02 by vopolonc          #+#    #+#             */
/*   Updated: 2019/02/04 14:44:09 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		len_chk(unsigned int numb, int base)
{
	int			len;

	len = 0;
	while (numb /= base)
		len++;
	return (len);
}

char			*ft_itoa_base(unsigned int numb, int base, char *tab)
{
	char		*str;
	int			len;
	int			flag;

	flag = 0;
	if (base < 2 || base > 16)
		return (0);
	len = len_chk(numb, base) + 1;
	str = ft_strnew(len);
	while (len > 0)
	{
		str[len-- - 1] = tab[numb % base];
		numb /= base;
	}
	return (str);
}
