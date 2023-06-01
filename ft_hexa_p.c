/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:02:31 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/06/01 12:06:24 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static void	ft_hex(unsigned long long nb, unsigned int *byte_count)
{
	if (nb >= 16)
	{
		ft_hex(nb / 16, byte_count);
		ft_hex(nb % 16, byte_count);
	}
	else
	{
		if (nb <= 9)
			*byte_count += ft_putchar(nb + '0');
		else
			*byte_count += ft_putchar(nb - 10 + 'a');
	}
}

void	ft_hexa_p(unsigned long long nb, unsigned int *byte_count)
{
	if (!nb)
	{
		*byte_count += write(1, "(nil)", 5);
		return ;
	}
	*byte_count += write(1, "0x", 2);
	ft_hex(nb, byte_count);
}
