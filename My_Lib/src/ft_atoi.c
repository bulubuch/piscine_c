/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 01:42:49 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/11 00:12:21 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

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

int		ft_atoi(char *str)
{
	int 	nbr;
	int 	i;
	int 	len;

	nbr = 0;
	len = (ft_strlen(str));
	i = len - 1;
	while (i >= 0)
	{
		if ((str[i] > '9') || (str[i] < '0'))
			return (1);
		nbr += ((str[i] - 48) % 10) * power(len - i - 1);
		i--;
	}
	return (nbr);
}
