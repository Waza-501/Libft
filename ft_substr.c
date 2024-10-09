/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 14:36:30 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/09 12:42:25 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*new;

	size = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		return (ft_strdup(s + start));
	new = (char *)malloc(len + 1);
	if (!new)
		return (NULL);
	while (s && len > 0 && start < (ft_strlen(s) + 1))
	{
		new[size] = s[start];
		size++;
		start++;
		len--;
	}
	new[size] = '\0';
	return (new);
}
