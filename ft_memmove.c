/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 13:44:54 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/12 16:48:34 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*reverse_order(void *dst, const void *src, size_t len)
{
	size_t			tally;
	unsigned char	*copy_dst;
	unsigned char	*copy_src;

	tally = 0;
	copy_dst = (unsigned char *)dst;
	copy_src = (unsigned char *)src;
	while (len > tally)
	{
		copy_dst[len - 1] = copy_src[len - 1];
		len--;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			tally;
	unsigned char	*copy_dst;
	unsigned char	*copy_src;

	tally = 0;
	copy_dst = (unsigned char *)dst;
	copy_src = (unsigned char *)src;
	if (!dst || !src)
		return (NULL);
	if (copy_dst > copy_src)
		reverse_order(dst, src, len);
	else
	{	
		while (tally < len)
		{
			copy_dst[tally] = copy_src[tally];
			tally++;
		}
	}
	return (dst);
}
