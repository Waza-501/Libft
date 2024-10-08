/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 14:53:47 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/08 16:10:31 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*combine;

	if (!s1 || !s2)
		return (NULL);
	size = 0;
	combine = (char *)malloc(size +1);
	if (!combine)
		return (NULL);
	while (*s1)
	{
		combine[size] = *s1;
		s1++;
		size++;
	}
	while (*s2)
	{
		combine[size] = *s2;
		s2++;
		size++;
	}
	combine[size] = '\0';
	return (combine);
}
