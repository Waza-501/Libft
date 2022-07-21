/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/21 13:58:27 by ohearn        #+#    #+#                 */
/*   Updated: 2022/05/18 13:41:03 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			tally;
	unsigned char	*copy_s1;
	unsigned char	*copy_s2;

	tally = 0;
	copy_s1 = (unsigned char *)s1;
	copy_s2 = (unsigned char *)s2;
	while (tally < n)
	{
		if (copy_s1[tally] != copy_s2[tally])
		{
			return (copy_s1[tally] - copy_s2[tally]);
		}
		tally++;
	}
	return (0);
}
