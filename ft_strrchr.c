/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/06 18:54:11 by ohearn        #+#    #+#                 */
/*   Updated: 2022/07/25 18:26:59 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		tally;
	char	conversion;

	tally = ft_strlen(s);
	conversion = (unsigned char)c;
	if (!ft_isascii(conversion))
		return (NULL);
	while (s[tally] != conversion && tally != 0)
		tally--;
	if (s[tally] == conversion)
		return ((char *)s + tally);
	return (0);
}
