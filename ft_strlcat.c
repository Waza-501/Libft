/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 14:14:38 by ohearn        #+#    #+#                 */
/*   Updated: 2022/06/28 16:31:06 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		tally;
	size_t		dst_length;
	size_t		src_length;

	tally = 0;
	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (dstsize <= dst_length)
	{
		return (dstsize + src_length);
	}
	while (src[tally] != '\0' && (dst_length + tally) < (dstsize - 1))
	{
		dst[dst_length + tally] = src[tally];
		tally++;
	}
	dst[dst_length + tally] = '\0';
	return (dst_length + src_length);
}
