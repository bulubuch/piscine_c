/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 22:59:28 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/23 05:48:03 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "evalexpr.h"

int		display_error(char *msg)
{
	int		i;

	i = 0;
	while (msg[i] != '\0')
		write(2, &msg[i++], 1);
	exit (0);
}

int		is_number(void)
{
	int	i;

	i = 0;
	if ((g_expr[g_pos] >= '0') && (g_expr[g_pos] <= '9'))
	{
		while ((g_expr[g_pos] >= '0') && (g_expr[g_pos] <= '9'))
			g_number[i++] = g_expr[g_pos++];
		g_number[i] = '\0';
		return (1);
	}
	return (0);
}

int		is_symbol(void)
{
	if ((g_expr[g_pos] == '(') || (g_expr[g_pos] == ')')
		|| (g_expr[g_pos] == '+') || (g_expr[g_pos] == '-')
		|| (g_expr[g_pos] == '*') || (g_expr[g_pos] == '/')
		|| (g_expr[g_pos] == '%'))
	{
		g_symbol = g_expr[g_pos];
		g_pos++;
		return (1);
	}
	return (0);
}

void	next_lexem(void)
{
	printf("NEXT_LEXEM\n");
	while ((g_expr[g_pos] == ' ') || (g_expr[g_pos] == '\t'))
		g_pos++;
	if (g_expr[g_pos] == '\0')
		g_lexem_type = END_OF_LINE;
	else
	{
		if (is_number())
			g_lexem_type = NUMBER;
		else if (is_symbol())
			g_lexem_type = SYMBOL;
		else
			display_error(ILLEGAL_EXPR_MSG);
	}
	printf("LEXEM TYPE %d\n", g_lexem_type);
	return ;
}

int		high(void)
{
	int		nb;

	printf("HIGH \t%c\t%d\n", g_symbol, g_pos);
	if ((g_lexem_type == SYMBOL) && (g_symbol == '('))
	{
		next_lexem();
		nb = low();
		if (!((g_lexem_type == SYMBOL) && (g_symbol == ')')))
			display_error(BAD_EXPRESSION);
		else
			next_lexem();
	}
	else
		nb = number();
	printf("HIGH return LEXEM %d\n", nb);
	return (nb);
}

int		med(void)
{
	int		nb1;
	int		nb2;
	char	op;

	printf("MED \t%c\t%d\n", g_symbol, g_pos);
	nb1 = high();
	while ((g_lexem_type == SYMBOL) && ((g_symbol == '*') \
		|| (g_symbol == '/') || (g_symbol == '%')))
	{
		op = g_symbol;
		next_lexem();
		nb2 = high();
		if (op == '*')
			nb1 = nb1 * nb2;
		if (op == '/')
			nb1 = nb1 / nb2;
		if (op == '%')
			nb1 = nb1 % nb2;
	}
	printf("MED return number %d\n", nb1);
	return (nb1);
}

int		low(void)
{
	int		nb1;
	int		nb2;
	char	op;

	printf("LOW \t%c\t%d\n", g_symbol, g_pos);
	nb1 = med();
	while ((g_lexem_type == SYMBOL) && ((g_symbol == '+') || (g_symbol == '-')))
	{
		op = g_symbol;
		next_lexem();
		nb2 = med();
		if (op == '+')
			nb1 = nb1 + nb2;
		if (op == '-')
			nb1 = nb1 - nb2;
	}
	printf("LOW return number %d\n", nb1);
	return (nb1);
}

int		number(void)
{
	int		nb;

	printf("NUMBER \t%s\n", g_number);
	if (g_lexem_type != NUMBER)
		display_error(NUMBER_EXPEXTED);
	nb = ft_atoi(g_number);
	next_lexem();
	printf("NUMBER return \t%d\n", nb);
	return (nb);
}

int		eval_expr(char *str)
{
	int		result;

	g_expr = str;
	g_pos = 0;
	result = 0;
	g_lexem_type = -1;
	next_lexem();
	if (g_lexem_type != END_OF_LINE)
	{
		result = low();
		if (g_lexem_type != END_OF_LINE)
			return (result);
	}
	return (result);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
