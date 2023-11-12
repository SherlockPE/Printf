/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:04:43 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/11/12 06:52:44 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flags_format(va_list lista, char c, int *ptr_i)
{
	if (c == '%')
		ft_putchar('%', ptr_i);
	else if (c == 'c')
		ft_putchar(va_arg(lista, int), ptr_i);
	else if (c == 's')
		ft_putstr(va_arg(lista, char *), ptr_i);
	else if (c == 'p')
		printf("Soy una dirección de memoria");
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(lista, int), ptr_i);
	else if (c == 'u')
		ft_putnbr(va_arg(lista, unsigned int), ptr_i);
	else if (c == 'x')
		ft_converter_hexa_min(va_arg(lista, int), ptr_i);
	else if (c == 'X')
		ft_converter_hexa_mayus(va_arg(lista, int), ptr_i);
}

int	ft_printf(char const *values, ...)
{
	va_list	lista;
	int		i;
	int		count_char;

	va_start(lista, values);
	i = 0;
	while (values[i])
	{
		if (values[i] == '%')
		{
			i++;
			flags_format(lista, values[i], &count_char);
		}
		ft_putchar(values[i], &i);
		i++;
	}
	va_end(lista);
	return (count_char);
}

/*
int	main(void)
{
	printf("Original: %s, %s, %s, yo tengo %d %i años, Character: %c \n",
		"Hola", "qué", "tal?", 277, 825, 'c');
	ft_printf("Copia: %s, %s, %s, yo tengo %d %i años, Character: %c \n",
		"Hola", "qué", "tal?", 277, 825, 'c');
	return (0);
}
 */