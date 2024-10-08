/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 16:07:34 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/08 14:18:16 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	new;
	size_t	dstsize;
	size_t	srcsize;

	new = 0;
	dstsize = (size_t)ft_strlen(dst);
	srcsize = (size_t)ft_strlen(src);
	if (size <= dstsize)
		return (dstsize + srcsize);
	while (src[new] != '\0' && (dstsize + new) < size - 1)
	{
		dst[dstsize + new] = src[new];
		new++;
	}
	dst[dstsize + new] = '\0';
	return (dstsize + srcsize);
}
