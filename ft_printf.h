/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:04:50 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/11/16 12:34:25 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(FT_PRINTF)
# define FT_PRINTF

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putnbr_unsigned(unsigned int n, int *count);
void	ft_print_memory(void *str, int *count);
void	ft_converter_hexa_long(long long number, int *count);
void	ft_converter_hexa_min(unsigned int number, int *count);
void	ft_converter_hexa_mayus(unsigned int number, int *count);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putnbr(int n, int *count);
int		ft_printf(char const *values, ...);

#endif // ft_printf
