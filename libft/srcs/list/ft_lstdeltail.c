/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdeltail.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:09:51 by user42            #+#    #+#             */
/*   Updated: 2020/07/10 15:09:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdeltail(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*last;
	t_list	*curr;

	if (!alst || !*alst)
		return ;
	last = *alst;
	if (!last->next)
	{
		ft_lstdelone(alst, del);
		return ;
	}
	curr = last->next;
	while (curr->next)
	{
		last = curr;
		curr = curr->next;
	}
	last->next = NULL;
	ft_lstdelone(&curr, del);
}
