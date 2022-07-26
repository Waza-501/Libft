/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/18 13:39:11 by ohearn        #+#    #+#                 */
/*   Updated: 2022/07/26 18:11:21 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*pointer;
	size_t	safeguard;

	if (count != 0 || size != 0)
	{
		safeguard = count * size;
		if (count != safeguard / size)
			return (NULL);
	}
	pointer = (char *)malloc(count * size);
	if (!pointer)
		return (0);
	ft_bzero(pointer, count * size);
	return (pointer);
}
