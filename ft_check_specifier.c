/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:28:40 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/05/16 21:28:41 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char    check_specifier(const char *str, int i, va_list args)
{
	if (str[i] == '%')
		return (ft_putchar(str[i]));
	if (str[i] == 'c')
		return (ft_putchar(va_arg(args, int))); // int because is a char, so its the same bcs of ascii
	if (str[i] == 's')
		return (ft_writing(va_arg(args, char *)));
	if (str[i] == 'u')
		return (ft_putnbr(va_arg(args, int)));
	if (str[i] == 'd' || str[i] == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (str[i] == 'p')
		return (ft_putchar(va_arg(args, int)));
	if (str[i] == 'x')
		return (ft_hexa(va_arg(args, int), "1234567890abcdef"));
	if (str[i] == 'X')
		return (ft_hexa(va_arg(args, int), "1234567890ABCDEF"));

}
