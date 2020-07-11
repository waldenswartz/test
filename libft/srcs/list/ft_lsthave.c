/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsthave.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:09:52 by user42            #+#    #+#             */
/*   Updated: 2020/07/10 15:09:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_lsthave(t_list *lst, int (*f)(t_list *elem))
{
	int		nb;

	nb = 0;
	while (lst)
	{
		nb += f(lst);
		lst = lst->next;
	}
	return (nb);
}