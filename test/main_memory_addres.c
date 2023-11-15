/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_addres.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:35:10 by flopez-r          #+#    #+#             */
/*   Updated: 2023/11/14 17:53:30 by flopez-r         ###   ########.fr       */
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


	printf("Original function: \n");
	printf("%p\n", &i);
	printf("%p\n", &str);
	printf("%p\n", &box);
	printf("%p\n", &str_malloc);
	printf("\n\n");

	ft_printf("Recreated function: \n");
	ft_printf("%p\n", &i);
	ft_printf("%p\n", &str);
	ft_printf("%p\n", &box);
	ft_printf("%p\n", &str_malloc);
	ft_printf("\n\n");

	free(str_malloc);
}

