/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelghi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 18:20:39 by ambelghi          #+#    #+#             */
/*   Updated: 2020/07/10 15:17:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strisdigit(char *s)
{
	int	i;

	i = 0;
	while (s && s[i++])
		if (!ft_isdigit(s[i - 1]) && s[i - 1] != '+' && s[i - 1] != '-')
			return (0);
	return (1);
}