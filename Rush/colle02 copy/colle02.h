/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 03:44:37 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/24 21:18:11 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLE02_H
# define COLLE02_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# define TL_0		'o'
# define TR_0		'o'
# define BR_0		'o'

# define TL_1		'/'
# define TR_1		'\\'
# define BR_1		'/'

# define TL_2		'A'
# define TR_2		'A'
# define BR_2		'C'

# define TL_3		'A'
# define TR_3		'C'
# define BR_3		'C'

# define TL_4		'A'
# define TR_4		'C'
# define BR_4		'A'

# define BUFF_SIZE		4096

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
	int				len;
}					t_list;

typedef struct		s_board
{
	int				size_x;
	int				size_y;
	char			**map;
}					t_board;

int					ft_strlen(char *str);
void				display_none(void);
void				display_res(int nb, int x, int y);
char				*ft_strncat(char *dest, char *src, int nb);
t_list				*ft_create_elem(void *data);
void				ft_list_foreach(t_list *begin_list, void (*f)(void *));
void				ft_list_clear(t_list **begin_list);
void				ft_list_push_back(t_list **begin_list,
									char *data, int size);
char				*list_to_str(t_list *file, int list_size);
void				identify(t_board *brd);
int					is_0(t_board *brd);
int					is_1(t_board *brd);
int					is_2(t_board *brd);
int					is_3(t_board *brd);
int					is_4(t_board *brd);
char				*bufferize(void);
t_board				*build_board(char *str);

#endif
