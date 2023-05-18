/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:47:09 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/05/16 20:47:10 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include<stdarg.h>
#include<unistd.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int	    ft_printf(const char *, ...);
char    ft_check_specifier(const char *str, int i, va_list args);
int     ft_putchar(char c);
int     ft_putnbr(int nb);
size_t  ft_strlen(char *str);
char    *ft_strchr(const char *s, int c);
int     ft_writing(char *str);
int     ft_hexa(int nb, char *base);


#endif