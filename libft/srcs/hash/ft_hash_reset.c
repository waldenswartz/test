/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_reset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:09:48 by user42            #+#    #+#             */
/*   Updated: 2020/07/10 15:09:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_hash_reset(t_hash_map **map, void (*del)(void *data), uint32_t size)
{
	ft_hash_del_map(map, del);
	*map = ft_hash_init(size);
}
