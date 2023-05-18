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

#include "libftprintf.h"

int ft_printf(const char *string, ...)
{
        size_t  i;

        i = 0;
        va_list args;
        va_start(args,string);
        while(string[i])
        {
                if(string[i] == '%' && ft_strchr("csudipxX%",string[i + 1]) != NULL)
                {
                        ft_check_specifier(string, i + 1 , args);
                        i += 2;
                }
                write(1,&string[i],1);
                i++;
        }
        return (5);
}
int main()
{
        ft_printf("hi my name is %s, and im %d y/o", "fernando", 19);
        return (0);
}