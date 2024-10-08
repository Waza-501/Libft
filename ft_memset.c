/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 13:51:44 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/08 14:52:42 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*temp;
	size_t	tally;

	temp = s;
	tally = 0;
	while (tally < n)
	{
		temp[tally] = c;
		tally++;
	}
	return (s);
}
