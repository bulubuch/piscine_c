/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 23:02:17 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/23 05:20:13 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVALEXPR
# define EVALEXPR

#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>


#define END_OF_LINE	0
#define NUMBER		1
#define SYMBOL 		2
#define ILLEGAL_EXPR_MSG	"Illegal character in expression.\n"
#define NUMBER_EXPEXTED		"Number is expected.\n"
#define BAD_EXPRESSION		"Bad expression\n"

int		is_number();
int		display_error(char *msg);
int		is_symbol();
void	next_lexem();
int		high();
int		med();
int		low();
int		number();
int		eval_expr(char *str);
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putchar(char c);

char	*g_expr = NULL;
int		g_pos = 0;
int		g_lexem_type = -1;
char	g_symbol = -1;
char	g_number[16] = "";

#endif
