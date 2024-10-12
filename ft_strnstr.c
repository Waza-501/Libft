/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 12:25:46 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/11 17:53:52 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	tally1;
	size_t	tally2;

	tally1 = 0;
	if (little[tally1] == '\0')
		return ((char *)big);
	while (big [tally1] != '\0' && tally1 < len)
	{
		tally2 = 0;
		while ((big[tally1 + tally2] == little[tally2])
			&& (tally1 + tally2 < len))
		{
			if (little[tally2 + 1] == '\0')
				return ((char *)big + tally1);
			tally2++;
		}
		tally1++;
	}
	return (NULL);
}
