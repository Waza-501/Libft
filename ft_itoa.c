/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/09 14:20:44 by ohearn        #+#    #+#                 */
/*   Updated: 2022/06/17 12:40:34 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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

static void	calculator(char *ret, int n, int len)
{
	int		i;
	int		divide;
	int		check_negative;

	i = 0;
	divide = 1;
	check_negative = is_negative(n, i, ret);
	if (check_negative == -1)
		i++;
	while ((len -1) > 0)
	{
		divide *= 10;
		len--;
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
	int		len;
	int		negative;
	int		n_copy;
	char	*ret;

	len = 0;
	n_copy = n;
	negative = 0;
	while (n_copy != 0)
	{
		len++;
		n_copy /= 10;
	}
	if (n == 0)
		len++;
	if (n < 0)
		negative = 1;
	ret = (char *)malloc(sizeof(char) * (len + 1 + negative));
	if (!ret)
		return (NULL);
	calculator(ret, n, len);
	return (ret);
}
