/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/21 13:09:52 by ohearn        #+#    #+#                 */
/*   Updated: 2022/05/18 13:40:56 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			tally;
	unsigned char	*copy_s;

	tally = 0;
	copy_s = (unsigned char *)s;
	while (tally < n)
	{
		if (copy_s[tally] == (unsigned char)c)
		{
			return (copy_s + tally);
		}
		tally++;
	}
	return (0);
}
