/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:29:25 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/06/01 12:08:58 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_writing(char *str, unsigned int *byte_count)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		*byte_count += (write(1, "(null)", 6));
		return ;
	}
	while (str[i] != '\0')
	{
		*byte_count += write(1, &str[i], 1);
		i++;
	}
}
