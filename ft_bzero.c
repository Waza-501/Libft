/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owhearn <owhearn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:04:22 by owhearn           #+#    #+#             */
/*   Updated: 2024/10/07 13:08:01 by owhearn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	char	*temp;
	size_t	tally;

	temp = (char *)s;
	tally = 0;
	while (tally < n)
	{
		temp[tally] = '\0';
		tally++;
	}
	return (NULL);
}
