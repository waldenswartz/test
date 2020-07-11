/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:09:49 by user42            #+#    #+#             */
/*   Updated: 2020/07/10 15:09:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_dlstdelone(t_dlist **alst)
{
	t_dlist *tmp;
	t_dlist **prev;
	t_dlist	**next;

	if (alst && (tmp = *alst))
	{
		prev = &(tmp->prev);
		next = &(tmp->next);
		if (next && *next)
			(*next)->prev = *prev;
		if (prev && *prev)
			(*prev)->next = *next;
		ft_memdel((void **)&tmp->data);
		ft_memdel((void **)&tmp);
		*alst = NULL;
		alst = NULL;
	}
}
