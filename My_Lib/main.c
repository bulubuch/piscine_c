/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 09:33:09 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/11 09:36:31 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);

int		main(void)
{
	ft_putchar('\n');
	ft_putnbr(ft_atoi("958462"));
	return (0);
}