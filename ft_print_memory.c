/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 09:41:37 by flopez-r          #+#    #+#             */
/*   Updated: 2023/11/14 17:44:29 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_memory(void *str, int *count)
{
	long long	i;

	i = (long long)str;
	if (i == 0)
	{
		ft_putstr("0x0", count);
		return ;
	}
	ft_putstr("0x", count);
	ft_converter_hexa_long(i, count);
}
