/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 09:41:37 by flopez-r          #+#    #+#             */
/*   Updated: 2023/11/16 16:22:37 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_memory(unsigned long i, int *count)
{
	if (i == 0)
	{
		ft_putstr("0x0", count);
		return ;
	}
	ft_putstr("0x", count);
	ft_converter_hexa_long(i, count);
}
