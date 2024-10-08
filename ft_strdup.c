/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 14:20:05 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/08 14:35:30 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;

	new = (char *)malloc(ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	ft_memcpy(new, s, ft_strlen(s) + 1);
	return (new);
}
