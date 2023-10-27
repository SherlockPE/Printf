/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:04:47 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/10/27 12:10:18 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		write(fd, &s[i++], 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	result;
	long	number;

	number = (long) n;
	if (number < 0)
	{
		write(fd, "-", 1);
		number = -number;
	}
	if (number > 9)
		ft_putnbr_fd(number / 10, fd);
	result = (number % 10) + '0';
	write(fd, &result, 1);
}
