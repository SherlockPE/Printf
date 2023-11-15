/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memory_addres.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:35:10 by flopez-r          #+#    #+#             */
/*   Updated: 2023/11/15 19:56:50 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 
#include <stdio.h>
#include <strings.h>


int	main(void)
{
	int i;
	char *str;
	char **box;
	char *str_malloc = strdup("Hola");

	return_value = printf("Original function: \n");
	printf("%d\n", return_value);
	return_value = printf("%p\n", &i);
	printf("%d\n", return_value);
	return_value = printf("%p\n", &str);
	printf("%d\n", return_value);
	return_value = printf("%p\n", &box);
	printf("%d\n", return_value);
	return_value = printf("%p\n", &str_malloc);
	printf("%d\n", return_value);
	return_value = printf("\n\n");
	printf("%d\n", return_value);

	return_value = ft_printf("Recreated function: \n");
	printf("%d\n", return_value);
	return_value = ft_printf("%p\n", &i);
	printf("%d\n", return_value);
	return_value = ft_printf("%p\n", &str);
	printf("%d\n", return_value);
	return_value = ft_printf("%p\n", &box);
	printf("%d\n", return_value);
	return_value = ft_printf("%p\n", &str_malloc);
	printf("%d\n", return_value);
	return_value = ft_printf("\n\n");
	printf("%d\n", return_value);


	free(str_malloc);
}

