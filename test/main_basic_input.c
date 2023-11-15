/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_basic_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 06:53:54 by flopez-r          #+#    #+#             */
/*   Updated: 2023/11/15 19:36:59 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int i = 0;
	char *str_stack;
	char *str_heap;
	
	str_stack = "Soy una string en el stack";
	str_heap = calloc(4, 1);
	
	//Original
	printf("Original function: \n");
	printf("Caracter            : %c\n", 'c');
	printf("String              : %s\n", "Soy una string");
	printf("Dirección de memoria: %p\n", &i);
	printf("Dirección de memoria: %p\n", &str_stack);
	printf("Dirección de memoria: %p\n", &str_heap);
	printf("Digit               : %d\n", 7);
	printf("Integer             : %i\n", 7);
	printf("Unsigned Int        : %u\n", i);
	printf("Hexadecimal min     : %x\n", 100);
	printf("Hexadecimal mayus   : %X\n", 100);
	printf("percent             : %%");

	printf("\n");
	ft_printf("\n");

	//Recreated
	ft_printf("Recreated function: \n");
	ft_printf("Caracter            : %c\n", 'c');
	ft_printf("String              : %s\n", "Soy una string");
	ft_printf("Dirección de memoria: %p\n", &i);
	ft_printf("Dirección de memoria: %p\n", &str_stack);
	ft_printf("Dirección de memoria: %p\n", &str_heap);
	ft_printf("Digit               : %d\n", 7);
	ft_printf("Integer             : %i\n", 7);
	ft_printf("Unsigned Int        : %u\n", i);
	ft_printf("Hexadecimal min     : %x\n", 100);
	ft_printf("Hexadecimal mayus   : %X\n", 100);
	ft_printf("percent             : %%");
	
	printf("\n");
	ft_printf("\n");
	
	return 0;
}
