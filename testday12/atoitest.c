/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoitest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 00:51:08 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/24 00:56:43 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
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

	i = 0;
	nbr = 0;
	minus = 0;
	while ((str[i] == '-') || (str[i] == '+') || (str[i] == ' '))
	{
		if (str[i++] == '-')
			minus++;
	}
	str = &str[i];
	len = (ft_strlen(str));
	i = len - 1;
	while (i >= 0)
	{
		if ((str[i] > '9') || (str[i] < '0'))
			return (1);
		nbr += ((str[i] - 48) % 10) * power(len - i - 1);
		i--;
	}
	return (negativize(nbr, minus));
}

int		main()
{
	printf("%d\n", ft_atoi("-+-+---5"));
}
