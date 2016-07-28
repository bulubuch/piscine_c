/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 08:46:24 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/21 05:14:59 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void skip_whitespaces(char **str) {
	while ((**str == ' ') || (**str == '\t') || (**str == '\n')
		*str++;
}

int		high(char *str)
{
	int		nb;
	skip_whitespaces(&str);
	if (*str == '(')
	{
		nb = high(++str);
		if (*str == ')')
			return (nb);
		else
			error_exit(BAD_EXPRESSION_MSG);
	}
	else
		nb = med(++str);
}

int		med(char *str)
{
	if (*expr == '*')
		return (mult(res, high(++str)));
	else if (*expr == '/')
		return (div(res, high(++str)));
	else if (*expr == '%')
		return (mod(res, high(++str)));
}

int		low(char *str)
{
	if (*expr == '*')
		return (mult(res, high(++str)));
	else if (*expr == '/')
		return (div(res, high(++str)));
	else if (*expr == '%')
		return (mod(res, high(++str)));
	else
		return 
}

int		number(char *str)
{
	return (ft_atoi(str));
}

int 	eval_expr(char *str)
{
	return (high(str))
}

int 	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar(’\n’);
	}
	return (0);
}
