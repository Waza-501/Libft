/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/09 15:02:43 by owen          #+#    #+#                 */
/*   Updated: 2024/10/09 18:05:18 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	findsize(int n)
{
	size_t	size;

	size = 0;
	if (n < 0)
	{
		n *= -1;
		size++;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*ret;
	size_t	size;

	size = findsize(n);
	printf("%i\n%zu\n", n, size);
	if (n == 0)
		return (ft_strdup("0"));
	ret = (char *)malloc(sizeof(char *) * size + 1);
	if (!ret)
		return (NULL);
	ret[size] = '\0';
	size--;
	if (n < 0)
	{
		ret[0] = '-';
		size--;
	}
	while (n > 0)
	{
		ret[size] = 48 + (n % 10);
		n /= 10;
		size--;
	}
	return (ret);
}

/*void	*conversion(char *ret, int n, size_t size, int negative)
{
	int	idx;
	int	div;

	idx = 0;
	div = 1;
	if (negative != 0)
	{
		ret[idx] = '-';
		idx++;
	}
	while ((size - 1) > 0)
	{
		div *= 10;
		size--;
	}
	while (div >= 1)
	{
		ret[idx] = ((n / div) )
	}
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
	ret = (char *)malloc(sizeof(char *) * (size + 1 + negative));
	if (!ret)
		return (NULL);
	conversion(ret, n, size, negative);
	return (ret);
}*/
