/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:46:23 by user42            #+#    #+#             */
/*   Updated: 2020/07/10 14:46:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "lexer.h"
#include "parser.h"

int	p_add_amp(t_token *token, t_parser *parser)
{
	t_cmd_table	*table;
	t_and_or	*and_or;

	(void)token;
	table = (t_cmd_table *)parser->curr_table->data;
	and_or = (t_and_or *)table->curr_and_or->data;
	and_or->background = 1;
	parser->state = S_PARSER_TABLE_START;
	return (1);
}
