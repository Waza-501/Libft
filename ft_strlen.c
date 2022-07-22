/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/11 19:18:57 by ohearn        #+#    #+#                 */
/*   Updated: 2022/07/22 14:26:13 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const	char *s)
{
	size_t	tally;

	tally = 0;
	while (s[tally] != '\0')
		tally++;
	return (tally);
}
