/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 15:21:32 by ohearn        #+#    #+#                 */
/*   Updated: 2022/07/22 14:26:06 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		tally;

	tally = (size_t)ft_strlen (src);
	if (dstsize == 0)
		return (tally);
	while (*src && dstsize - 1 > 0)
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = 0;
	return (tally);
}
