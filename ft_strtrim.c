/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 15:41:57 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/22 14:43:00 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;

	size = 0;
	if (!set)
		return (ft_substr(s1, 0, ft_strlen(s1) + 1));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size = ft_strlen(s1);
	while (*s1 && ft_strrchr(set, s1[size]))
		size--;
	return (ft_substr(s1, 0, size + 1));
}
