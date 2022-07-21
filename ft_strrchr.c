/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/06 18:54:11 by ohearn        #+#    #+#                 */
/*   Updated: 2022/06/28 16:34:59 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	tally;

	tally = ft_strlen(s);
	if (!ft_isascii(c))
		return (NULL);
	while (s[tally] != c && tally != 0)
		tally--;
	if (s[tally] == c)
		return ((char *)s + tally);
	return (0);
}

// {
// 	int	tally;
//
// 	tally = ft_strlen(s);
// 	if (!ft_isascii((char)c))
// 	{
// 		return (0);
// 	}
// 	while (tally != 0)
// 	{
// 		if (s[tally] == (char)c)
// 		{
// 			return ((char *)s + tally);
// 		}
// 		tally--;
// 	}
// 	return (0);
// }