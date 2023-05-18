/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:02:31 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/05/18 17:02:37 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

int     ft_hexa(int nb, char *base)
{
    int base_len;

	base_len = ft_strlen(base); 
    if (nb < 0)
    {
        nb = - nb;
    	write(1,"-",1);
    }
    if (nb >= base_len)
    {
        ft_hexa ((nb / base_len),base);
        nb = nb % base_len;
    }
    write(1,&base[nb],1);
    return (0);
}

