/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 15:10:24 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/24 21:13:11 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
int		ft_atoi(char *str);

int		main(int ac, char **av)
{
	rush(ft_atoi(av[1]), ft_atoi(av[2]));
	return (0);
}
