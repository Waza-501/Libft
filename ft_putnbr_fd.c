/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/28 14:57:39 by ohearn        #+#    #+#                 */
/*   Updated: 2022/07/22 14:12:38 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_negative(int n, int fd)
{
	int		check_negative;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		check_negative = -1;
	}
	else
		check_negative = 1;
	return (check_negative);
}

static void	calculator(int n, int len, int fd)
{
	int		divide;
	int		check_negative;

	divide = 1;
	check_negative = is_negative(n, fd);
	while ((len -1) > 0)
	{
		divide *= 10;
		len--;
	}
	while (divide >= 1)
	{
		ft_putchar_fd((((n / divide) * check_negative) + '0'), fd);
		n %= divide;
		divide /= 10;
	}
}	

void	ft_putnbr_fd(int n, int fd)
{
	int		len;
	int		n_copy;

	len = 0;
	n_copy = n;
	while (n_copy != 0)
	{
		len++;
		n_copy /= 10;
	}
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	calculator(n, len, fd);
}
