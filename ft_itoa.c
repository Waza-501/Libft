/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/09 14:20:44 by ohearn        #+#    #+#                 */
/*   Updated: 2022/07/26 20:00:48 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_negative(int n, int i, char *conversion)
{
	int		check_negative;

	if (n < 0)
	{
		conversion[i] = '-';
		check_negative = -1;
	}
	else
		check_negative = 1;
	return (check_negative);
}

static void	calculator(char *conversion, int n, int length)
{
	int		tally;
	int		divide;
	int		check_negative;

	tally = 0;
	divide = 1;
	check_negative = is_negative(n, tally, conversion);
	if (check_negative == -1)
		tally++;
	while ((length -1) > 0)
	{
		divide *= 10;
		length--;
	}
	while (divide >= 1)
	{
		conversion[tally] = ((n / divide) * check_negative) + '0';
		n %= divide;
		divide /= 10;
		tally++;
	}
	conversion[tally] = 0;
}	

char	*ft_itoa(int n)
{
	int		length;
	int		negative;
	int		n_copy;
	char	*conversion;

	length = 0;
	n_copy = n;
	negative = 0;
	while (n_copy != 0)
	{
		length++;
		n_copy /= 10;
	}
	if (n == 0)
		length++;
	if (n < 0)
		negative = 1;
	conversion = (char *)malloc(sizeof(char) * (length + 1 + negative));
	if (!conversion)
		return (NULL);
	calculator(conversion, n, length);
	return (conversion);
}
