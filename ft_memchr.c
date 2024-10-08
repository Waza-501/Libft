/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 08:49:54 by owen          #+#    #+#                 */
/*   Updated: 2024/10/08 09:02:00 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			tally;
	unsigned char	*ret;

	tally = 0;
	ret = (unsigned char *)s;
	while (tally < n)
	{
		if (ret[tally] == c)
			return (ret + tally);
		tally++;
	}
	return (NULL);
}
