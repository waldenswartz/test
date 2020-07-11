/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:10:09 by user42            #+#    #+#             */
/*   Updated: 2020/07/10 15:10:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_wstrlen(unsigned *str)
{
	size_t	len;

	len = 0;
	while (*str != L'\0')
	{
		len += ft_wcharlen(*str);
		str++;
	}
	return (len);
}
