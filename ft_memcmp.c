/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 09:02:48 by owen          #+#    #+#                 */
/*   Updated: 2024/10/08 09:07:24 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			tally;
	unsigned char	*cs1;
	unsigned char	*cs2;

	tally = 0;
	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	if (n ==  0)
		return (0);
	while (tally < n)
	{
		if (cs1[tally] != cs2[tally])
			return (cs1[tally] - cs2[tally]);
		tally++;
	}
	return (0);
}
