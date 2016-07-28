/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 00:59:28 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/17 21:59:17 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <stdlib.h>
# include <unistd.h>

# define TRUE		1
# define FALSE		0

void	show_grid(char **grid);
char	**copy_grid(char **argv);
int		sudo_solver(char **grid, int y, int x);
int		is_possible(char **grid, int y, int x, char c);

#endif
