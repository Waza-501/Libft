/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/21 15:21:18 by ohearn        #+#    #+#                 */
/*   Updated: 2022/07/22 14:26:46 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	tally_1;
	size_t	tally_2;

	tally_1 = 0;
	if (needle[tally_1] == '\0')
		return ((char *)haystack);
	while ((haystack[tally_1] != '\0') && (tally_1 < len))
	{
		tally_2 = 0;
		while ((haystack[tally_1 + tally_2] == needle[tally_2])
			&& ((tally_1 + tally_2) < len))
		{
			if (needle[tally_2 + 1] == '\0')
				return ((char *)haystack + tally_1);
			tally_2++;
		}
		tally_1++;
	}
	return (0);
}
