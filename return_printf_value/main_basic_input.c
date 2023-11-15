/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_basic_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 06:53:54 by flopez-r          #+#    #+#             */
/*   Updated: 2023/11/15 19:57:01 by flopez-r         ###   ########.fr       */
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
	char *until_null = "Function printf prints unt\0il";
	int return_value;
	
	str_stack = "Soy una string en el stack";
	str_heap = calloc(4, 1);
	
	//Original
	return_value = printf("Original function: \n");
	printf("%d\n", return_value);
	return_value = printf("Caracter            : %c\n", 'c');
	printf("%d\n", return_value);
	return_value = printf("String              : %s\n", "Soy una string");
	printf("%d\n", return_value);
	return_value = printf("Dirección de memoria: %p\n", &i);
	printf("%d\n", return_value);
	return_value = printf("Dirección de memoria: %p\n", &str_stack);
	printf("%d\n", return_value);
	return_value = printf("Dirección de memoria: %p\n", &str_heap);
	printf("%d\n", return_value);
	return_value = printf("Digit               : %d\n", 7);
	printf("%d\n", return_value);
	return_value = printf("Integer             : %i\n", 7);
	printf("%d\n", return_value);
	return_value = printf("Unsigned Int        : %u\n", i);
	printf("%d\n", return_value);
	return_value = printf("Hexadecimal min     : %x\n", 100);
	printf("%d\n", return_value);
	return_value = printf("Hexadecimal mayus   : %X\n", 100);
	printf("%d\n", return_value);
	return_value = printf("percent             : %%");
	printf("%d\n", return_value);
	return_value = printf("%s\n", until_null);
	printf("%d\n", return_value);

	ft_printf("\n");

	//Recreated
	return_value = ft_printf("Recreated function: \n");
	printf("%d\n", return_value);
	return_value = ft_printf("Caracter            : %c\n", 'c');
	printf("%d\n", return_value);
	return_value = ft_printf("String              : %s\n", "Soy una string");
	printf("%d\n", return_value);
	return_value = ft_printf("Dirección de memoria: %p\n", &i);
	printf("%d\n", return_value);
	return_value = ft_printf("Dirección de memoria: %p\n", &str_stack);
	printf("%d\n", return_value);
	return_value = ft_printf("Dirección de memoria: %p\n", &str_heap);
	printf("%d\n", return_value);
	return_value = ft_printf("Digit               : %d\n", 7);
	printf("%d\n", return_value);
	return_value = ft_printf("Integer             : %i\n", 7);
	printf("%d\n", return_value);
	return_value = ft_printf("Unsigned Int        : %u\n", i);
	printf("%d\n", return_value);
	return_value = ft_printf("Hexadecimal min     : %x\n", 100);
	printf("%d\n", return_value);
	return_value = ft_printf("Hexadecimal mayus   : %X\n", 100);
	printf("%d\n", return_value);
	return_value = ft_printf("percent             : %%");
	printf("%d\n", return_value);
	return_value = ft_printf("%s\n", until_null);
	printf("%d\n", return_value);
	
	ft_printf("\n");
	
	return 0;
}
