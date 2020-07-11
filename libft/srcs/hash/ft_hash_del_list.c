/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_del_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:09:46 by user42            #+#    #+#             */
/*   Updated: 2020/07/10 15:09:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_hash_del_list(t_list **lst, void (*del)(void *))
{
	t_hash_node	*node;

	if ((node = (t_hash_node *)(*lst)->data))
	{
		ft_strdel(&node->key);
		if (del)
			del(node->data);
		free(node);
	}
	free(*lst);
}
