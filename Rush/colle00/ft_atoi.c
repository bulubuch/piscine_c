/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 01:42:49 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/24 21:11:20 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_numlen(char *str)
{
	int		i;

	i = 0;
	while ((str[i] <= '9') && (str[i] >= '0'))
		i++;
	return (i);
}

int		power(int pow)
{
	int		res;

	res = 1;
	while (pow > 0)
	{
		res = res * 10;
		pow--;
	}
	return (res);
}

int		negativize(int nbr, int minus)
{
	while (minus > 0)
	{
		nbr = nbr * -1;
		minus--;
	}
	return (nbr);
}

int		ft_atoi(char *str)
{
	int		nbr;
	int		i;
	int		len;
	int		minus;

	nbr = 0;
	minus = 0;
	i = 0;
	while ((str[i] == '-') || (str[i] == '+') || (str[i] == ' '))
	{
		if (str[i++] == '-')
			minus++;
	}
	str = &str[i];
	len = (ft_numlen(str));
	i = len - 1;
	while (i >= 0)
	{
		if ((str[i] > '9') || (str[i] < '0'))
			break ;
		nbr += ((str[i] - 48) % 10) * power(len - i - 1);
		i--;
	}
	nbr = negativize(nbr, minus);
	return (nbr);
}
