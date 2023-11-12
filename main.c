/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 06:53:54 by flopez-r          #+#    #+#             */
/*   Updated: 2023/11/12 07:12:56 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	unsigned int i = 0;
	
	printf("Original function: \n");
	printf("Caracter            : %c\n", 'c');
	printf("String              : %s\n", "Soy una string");
	printf("Dirección de memoria: %p\n", &i);
	printf("Digit               : %d\n", 7);
	printf("Integer             : %i\n", 7);
	printf("Unsigned Int        : %u\n", i);
	printf("Hexadecimal min     : %x\n", 10);
	printf("Hexadecimal mayus   : %X\n", 10);
		
	printf("\n");
	ft_printf("\n");

	ft_printf("Original function: \n");
	ft_printf("Caracter            : %c\n", 'c');
	ft_printf("String              : %s\n", "Soy una string");
	ft_printf("Dirección de memoria: %p\n", &i);
	ft_printf("Digit               : %d\n", 7);
	ft_printf("Integer             : %i\n", 7);
	ft_printf("Unsigned Int        : %u\n", i);
	ft_printf("Hexadecimal min     : %x\n", 10);
	ft_printf("Hexadecimal mayus   : %X\n", 10);
	
	return 0;
}
