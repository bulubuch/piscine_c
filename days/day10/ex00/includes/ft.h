/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 18:21:14 by mbuch             #+#    #+#             */
/*   Updated: 2016/07/15 01:57:07 by mbuch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int				ft_atoi(char *str);
int				ft_str_is_alpha(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_printable(char *str);
int				ft_str_is_uppercase(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);
char			*ft_strcapitalize(char *str);
char			*ft_strcat(char *dest, char *src);
char			*ft_strlowcase(char *str);
char			*ft_strncat(char *dest, char *src, int nb);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strupcase(char *str);
void			ft_putchar(char c);
void			ft_putnbr_base(int nbr, char *base);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
void			ft_swap(int *a, int *b);

#endif
