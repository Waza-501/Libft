/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owhearn <owhearn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:26:44 by owhearn           #+#    #+#             */
/*   Updated: 2024/10/07 15:37:59 by owhearn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*destcpy;
	const char	*srccpy;
	size_t		new;

	destcpy = (char *)dest;
	srccpy = (char *)src;
	new = 0;
	if (destcpy > srccpy)
	{
		while (n--)
			destcpy[n] = srccpy[n];
	}
	else
	{
		while (n--)
		{
			destcpy[new] = srccpy[new];
			new++;
		}
	}
	return (destcpy);
}
