/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:44:08 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/05/16 20:44:09 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_printf(const char *string, ...)
{
        size_t i = 0;
        va_list args;
        va_start(args,string);
        while(string[i])
        {
                if(string[i] == '%' && ft_strchr("csudipxX%",string[i + 1]) != 0)
                {
                        check_specifier(string, i + 1 , args);
                        i += 2;
                }
                write(1,&string[i],1);
                i++;
        }
        return (5);
}
