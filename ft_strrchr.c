/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 13:42:59 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/11 18:50:57 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	char		*ret;

	i = 0;
	ret = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			ret = ((char *)s + i);
		i++;
	}
	if (s[i] == (unsigned char)c)
		ret = ((char *)s + i);
	return (ret);
}
