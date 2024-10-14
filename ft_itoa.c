/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/09 15:02:43 by owen          #+#    #+#                 */
/*   Updated: 2024/10/14 11:30:45 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_negative(int negative, int idx, char *ret)
{
	int	confirm;

	confirm = 1;
	if (negative != 0)
	{
		ret[idx] = '-';
		confirm = -1;
	}
	return (confirm);
}

void	conversion(char *ret, int n, size_t size, int negative)
{
	int	idx;
	int	neg;
	int	div;

	idx = 0;
	div = 1;
	neg = check_negative(negative, idx, ret);
	if (neg == -1)
		idx++;
	while ((size - 1) > 0)
	{
		div *= 10;
		size--;
	}
	while (div >= 1)
	{
		ret[idx] = ((n / div) * neg) + '0';
		n %= div;
		div /= 10;
		idx++;
	}
	ret[idx] = '\0';
}

char	*ft_itoa(int n)
{
	char	*ret;
	size_t	size;
	int		copy;
	int		negative;

	size = 0;
	copy = n;
	negative = 0;
	while (copy != 0)
	{
		copy /= 10;
		size++;
	}
	if (n == 0)
		size++;
	if (n < 0)
		negative = 1;
	ret = (char *)malloc(sizeof(char) * (size + 1 + negative));
	if (!ret)
		return (NULL);
	conversion(ret, n, size, negative);
	return (ret);
}
