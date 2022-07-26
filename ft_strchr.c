/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/06 15:24:33 by ohearn        #+#    #+#                 */
/*   Updated: 2022/07/25 20:12:50 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	tally;

	tally = 0;
	while (s[tally] != '\0')
	{
		if (s[tally] == (unsigned char)c)
			return ((char *)s + tally);
		tally++;
	}
	if (s[tally] == (unsigned char)c)
		return ((char *)s + tally);
	return (NULL);
}
