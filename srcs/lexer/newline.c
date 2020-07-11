/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newline.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:46:14 by user42            #+#    #+#             */
/*   Updated: 2020/07/10 18:02:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "lexer.h"

int	l_build_newline(t_lexer *lexer, char c)
{
	if (l_get_flag(lexer, F_HEREDOC))
	{
		lexer->state = S_HD_BODY;
		lexer->curr_here = lexer->here_queue->data;
		lexer->curr_token = lexer->curr_here->token;
		return (1);
	}
	else if (!l_create_token(lexer))
		return (0);
	l_buffer_add(lexer, c);
	lexer->curr_token->type = NEWLINE;
	l_buffer_flush(lexer);
	return (1);
}

int	l_delim_newline(t_lexer *lexer, char c)
{
	l_delim_token(lexer, c);
	l_build_newline(lexer, c);
	return (1);
}
