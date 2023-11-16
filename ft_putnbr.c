/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 03:58:29 by flopez-r          #+#    #+#             */
/*   Updated: 2023/11/16 13:41:02 by fabriciolop      ###   ########.fr       */
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
		ft_putchar('-', count);
		number = -number;
	}
	if (number > 9)
		ft_putnbr(number / 10, count);
	result = (number % 10) + '0';
	ft_putchar(result, count);
}
void	ft_putnbr_unsigned(unsigned int n, int *count)
{
	char	result;
	long	number;

	number = (long)n;
	if (number > 9)
		ft_putnbr(number / 10, count);
	result = (number % 10) + '0';
	ft_putchar(result, count);
}
