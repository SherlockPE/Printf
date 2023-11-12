/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pass_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 04:11:33 by flopez-r          #+#    #+#             */
/*   Updated: 2023/11/12 07:16:47 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_converter_hexa_min(int number, int *count)
{
	char	*hexa_digits;

	hexa_digits = "0123456789abcdef";
	if (number >= 16)
		ft_converter_hexa_min(number / 16, count);
	ft_putchar(hexa_digits[number % 16], count);
}

void	ft_converter_hexa_mayus(int number, int *count)
{
	char	*hexa_digits;

	hexa_digits = "0123456789ABCDEF";
	if (number >= 16)
		ft_converter_hexa_mayus(number / 16, count);
	ft_putchar(hexa_digits[number % 16], count);
}
