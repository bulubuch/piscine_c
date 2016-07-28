/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 17:19:43 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/20 17:32:02 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"
#define BUF_SIZE 4096
​
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
​
void	ft_putstr(char *str)
{
	int		i;
​
	i = 0;
	while (str[i] != '\0')
	{
		  ft_putchar(str[i]);
		i++;
	}
}
​
int		ft_check_argc(argc)
{
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (argc != 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	return (0);
}
​
int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
​
	if (ft_check_argc(argc) == 1)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (1);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	if (close(fd) == -1)
	{
		ft_putstr("close() error");
		return (1);
	}
	return (0);
}
