/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/09 14:20:44 by ohearn        #+#    #+#                 */
/*   Updated: 2022/07/25 18:59:49 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_negative(int n, int i, char *ret)
{
	int		check_negative;

	if (n < 0)
	{
		ret[i] = '-';
		check_negative = -1;
	}
	else
		check_negative = 1;
	return (check_negative);
}

static void	calculator(char *ret, int n, int length)
{
	int		i;
	int		divide;
	int		check_negative;

	i = 0;
	divide = 1;
	check_negative = is_negative(n, i, ret);
	if (check_negative == -1)
		i++;
	while ((length -1) > 0)
	{
		divide *= 10;
		length--;
	}
	while (divide >= 1)
	{
		ret[i] = ((n / divide) * check_negative) + '0';
		n %= divide;
		divide /= 10;
		i++;
	}
	ret[i] = 0;
}	

char	*ft_itoa(int n)
{
	int		length;
	int		negative;
	int		n_copy;
	char	*ret;

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
	ret = (char *)malloc(sizeof(char) * (length + 1 + negative));
	if (!ret)
		return (NULL);
	calculator(ret, n, length);
	return (ret);
}
