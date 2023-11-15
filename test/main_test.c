/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:15:17 by flopez-r          #+#    #+#             */
/*   Updated: 2023/11/15 19:36:52 by flopez-r         ###   ########.fr       */
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
	
	char *respuesta;
	void *pointer_to_null = 0;
	respuesta = calloc(3, 1);
	respuesta[0] = 'n';
	respuesta[1] = 'o';
	
	printf("Original\n");
	printf("Número minimo de int: %d\n", 2147483647);
	printf("Número minimo de int: %i\n", 2147483647);
	printf("Puntero a Null      : %s\n", pointer_to_null);
	printf("Hola mucho gusto, mi nombre es %s\nsoy un guía explorador de la tribu %d - guarida %i\nQuiere que le ayude en algo señor?\n....\n....\n%s\n\n", nombre, n_tribu, n_guarida, respuesta);
	printf("%p%p%p%p\n", &nombre, &n_tribu, &n_guarida, &respuesta);

	printf("\n");
	ft_printf("\n");

	ft_printf("Recreated\n");
	ft_printf("Número minimo de int: %d\n", 2147483647);
	ft_printf("Número minimo de int: %i\n", 2147483647);
	ft_printf("Puntero a Null      : %s\n", pointer_to_null);
	ft_printf("Hola mucho gusto, mi nombre es %s\nsoy un guía explorador de la tribu %d - guarida %i\nQuiere que le ayude en algo señor?\n....\n....\n%s\n\n", nombre, n_tribu, n_guarida, respuesta);
	ft_printf("%p%p%p%p\n", &nombre, &n_tribu, &n_guarida, &respuesta);

}