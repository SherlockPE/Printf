/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 03:58:29 by flopez-r          #+#    #+#             */
/*   Updated: 2023/11/12 06:53:20 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	char	result;
	long	number;

	number = (long)n;
	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
	}
	if (number > 9)
		ft_putnbr(number / 10, count);
	result = (number % 10) + '0';
	ft_putchar(result, count);
}
