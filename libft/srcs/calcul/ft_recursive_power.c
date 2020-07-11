/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:09:43 by user42            #+#    #+#             */
/*   Updated: 2020/07/10 15:09:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int pw)
{
	if (pw < 0)
		return (0);
	else if (pw == 0)
		return (1);
	else
		return (ft_recursive_power(nb, pw - 1) * nb);
}