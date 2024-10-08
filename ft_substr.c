/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 14:36:30 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/08 14:52:31 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*new;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		return (ft_strdup(s + start));
	new = (char *)malloc(len + 1);
	if (!new)
		return (NULL);
	while (len > 0)
	{
		new[size] = s[start];
		size++;
		start++;
		len--;
	}
	new[size] = '\0';
	return (new);
}
