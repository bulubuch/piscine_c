/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 11:02:12 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/12 10:49:47 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}
/*
char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int i_str;
	int i_to_find;

	i_str = 0;
	while (str[i_str] != '\0')
	{
		i_to_find = 0;
		if (str[i_str] == to_find[i_to_find])
		{
			i = i_str;
			while ((str[i_str] == to_find[i_to_find])
			 && (to_find[i_to_find] != '\0'))
			{
				i_str++;
				i_to_find++;
			}
			if (to_find[i_to_find] != '\0')
				return (&str[i_str - i_to_find]);
			i_str = i;
		}
		i_str++;
	}
	return (0);
}
*/
char	*ft_strstr(char *str, char *to_find)
{
	int i_str;
	int i_to_find;

	i_str = 0;
	i_to_find = 0;
	while (str[i_str] != '\0')
	{
		if (str[i_str] == to_find[i_to_find])
		{
			while (to_find[i_to_find] != '\0')
			{
				if (str[i_str] != to_find[i_to_find])
					return (0);
				i_str++;
				i_to_find++;
			}
			return (&str[i_str - i_to_find]);
		}
		i_str++;
	}
	return (0);
}

int		ft_nbrlen(char *str)
{
	int i;

	i = 0;
	while ((str[i] <= '9') && (str[i] >= '0') && (str[i] != '\0'))
		i++;
	return (i);
}

int		power(int pow)
{
	int	res;

	res = 1;
	while (pow > 0)
	{
		res = res * 10;
		pow--;
	}
	return (res);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
		i++;
	if ((s1[i] == '\0') && (s2[i] == '\0'))
		res = 0;
	else
		res = s1[i] - s2[i];
	return (res);
}

void	manage_exception(void)
{
	int		i;
	char	*message;

	i = 0;
	message = "----< Exception Handled >----\nCan not display -2147483648\n";
	while (message[i] != '\0')
		ft_putchar(message[i++]);
	return ;
}

int		base_check(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i] != '\0')
	{
		if ((base[i] < 32) || (base[i] == '+') || (base[i] == '-'))
			return (-1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (i);
}

void	recursive_display(int nbr, int base_int, char *base_ascii)
{
	if (nbr == -2147483648)
	{
		manage_exception();
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr >= base_int)
	{
		recursive_display(nbr / base_int, base_int, base_ascii);
		recursive_display(nbr % base_int, base_int, base_ascii);
	}
	else
		ft_putchar(base_ascii[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_int;

	base_int = base_check(base);
	if (base_int <= 1)
		return ;
	recursive_display(nbr, base_int, base);
}


int		main(void)
{
	char dest[50];

	dest[0] = 'z';
	dest[1] = 'b';
	dest[2] = '\0';
	dest[3] = 'p';
	dest[4] = 'f';
	dest[5] = 'f';
	dest[6] = 'g';
	dest[7] = 'h';
	dest[8] = 'j';
	dest[9] = 'k';
	dest[10] = 'l';
	dest[11] = 'm';
	dest[12] = 'n';
	dest[13] = 'o';
	dest[14] = '\0';
	char dest1[50];

	dest1[0] = 'z';
	dest1[1] = 'b';
	dest1[2] = '\0';
	dest1[3] = 'p';
	dest1[4] = 'f';
	dest1[5] = 'f';
	dest1[6] = 'g';
	dest1[7] = 'h';
	dest1[8] = 'j';
	dest1[9] = 'k';
	dest1[10] = 'l';
	dest1[11] = 'm';
	dest1[12] = 'n';
	dest1[13] = 'o';
	dest1[14] = '\0';
	ft_putnbr_base(214546984, "0123456789ABCDEF");
	ft_putchar('\n');
	return (0);
}
