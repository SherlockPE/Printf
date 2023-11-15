/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_new_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:15:17 by flopez-r          #+#    #+#             */
/*   Updated: 2023/11/15 19:58:34 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int main()
{
	char *nombre = "Russel";
	int n_tribu = 164;
	int n_guarida = 12;
	int return_value;
	
	char *respuesta;
	void *pointer_to_null = 0;
	respuesta = calloc(3, 1);
	respuesta[0] = 'n';
	respuesta[1] = 'o';

	return_value = printf("Original\n");
	printf("%d", return_value);
	return_value = printf("Número minimo de int: %d\n", 2147483647);
	printf("%d", return_value);
	return_value = printf("Número minimo de int: %i\n", 2147483647);
	printf("%d", return_value);
	return_value = printf("Puntero a Null      : %s\n", pointer_to_null);
	printf("%d", return_value);
	return_value = printf("Hola mucho gusto, mi nombre es %s\nsoy un guía explorador de la tribu %d - guarida %i\nQuiere que le ayude en algo señor?\n....\n....\n%s\n\n", nombre, n_tribu, n_guarida, respuesta);
	printf("%d", return_value);
	return_value = printf("%p%p%p%p\n", &nombre, &n_tribu, &n_guarida, &respuesta);
	printf("%d", return_value);

	return_value = printf("\n");
	printf("%d", return_value);
	return_value = ft_printf("\n");
	printf("%d", return_value);

	return_value = ft_printf("Recreated\n");
	printf("%d", return_value);
	return_value = ft_printf("Número minimo de int: %d\n", 2147483647);
	printf("%d", return_value);
	return_value = ft_printf("Número minimo de int: %i\n", 2147483647);
	printf("%d", return_value);
	return_value = ft_printf("Puntero a Null      : %s\n", pointer_to_null);
	printf("%d", return_value);
	return_value = ft_printf("Hola mucho gusto, mi nombre es %s\nsoy un guía explorador de la tribu %d - guarida %i\nQuiere que le ayude en algo señor?\n....\n....\n%s\n\n", nombre, n_tribu, n_guarida, respuesta);
	printf("%d", return_value);
	return_value = ft_printf("%p%p%p%p\n", &nombre, &n_tribu, &n_guarida, &respuesta);
	printf("%d", return_value);

}