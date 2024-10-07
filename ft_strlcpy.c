/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owhearn <owhearn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:44:17 by owhearn           #+#    #+#             */
/*   Updated: 2024/10/07 16:14:30 by owhearn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	new;

	new = (size_t)ft_strlen(src);
	if (size == 0)
		return (new);
	while (*src && size - 1 > 0)
	{
		*dest++ = *src++;
		size--;
	}
	*dest = '\0';
	return (new);
}
