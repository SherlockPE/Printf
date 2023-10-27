/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:04:50 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/10/27 12:10:35 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ft_printff)
#define ft_printff

int     ft_printf(char const *, ...);
void	ft_putchar_fd(char c, int fd)
void	ft_putstr_fd(char *s, int fd)
void	ft_putnbr_fd(int n, int fd)

#endif // ft_printff
