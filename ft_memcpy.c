/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 14:25:56 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/14 12:04:25 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destcpy;
	char	*srccpy;
	size_t	new;

	destcpy = (char *)dest;
	srccpy = (char *)src;
	new = 0;
	while (new < n && (destcpy != NULL || srccpy != NULL))
	{
		destcpy[new] = srccpy[new];
		new++;
	}
	return (destcpy);
}
