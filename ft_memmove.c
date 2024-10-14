/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 15:26:44 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/14 12:07:27 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*destcpy;
	const char	*srccpy;

	destcpy = (char *)dest;
	srccpy = (char *)src;
	if (destcpy > srccpy)
	{
		while (n--)
			destcpy[n] = srccpy[n];
	}
	else
	{
		destcpy = ft_memcpy(destcpy, srccpy, n);
	}
	return (destcpy);
}
