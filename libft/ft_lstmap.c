/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopolonc <vopolonc@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:43:43 by vopolonc          #+#    #+#             */
/*   Updated: 2018/11/13 13:31:34 by vopolonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *begin;

	if (!lst || !(f))
		return (NULL);
	new = f(lst);
	begin = new;
	while (lst->next)
	{
		lst = lst->next;
		if (!(new->next = f(lst)))
		{
			free(new->next);
			return (NULL);
		}
		new = new->next;
	}
	return (begin);
}
