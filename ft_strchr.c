/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:46:14 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/05/16 21:46:16 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
        size_t                  i;
        char                    *str;
        unsigned char   chr;

        chr = (unsigned char)c;
        str = (char *)s;
        i = 0;
        while (str[i] != chr)
        {
                if (str[i] == '\0')
                        return (NULL);
                i++;
        }
        return (&str[i]);
}
