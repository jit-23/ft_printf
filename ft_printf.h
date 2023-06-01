/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:47:09 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/06/01 12:13:15 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <ctype.h>
# include <stdlib.h>
# include <string.h>

int				ft_printf(const char *string, ...);
void			ft_check_specifier(const char *str, int i, va_list args,
					unsigned int *byte_count);
void			ft_hexa_xs(unsigned int nb, char type,
					unsigned int *byte_count);
void			ft_hexa_p(unsigned long long nb, unsigned int *byte_count);
void			ft_putnbr(int nb, unsigned int *byte_count);
void			ft_putnbr_u(unsigned int nb, unsigned int *byte_count);
int				ft_putchar(char c);
void			ft_writing(char *str, unsigned int *byte_count);
unsigned int	ft_strlen(char *str);
char			*ft_strchr(const char *s, int c);

#endif