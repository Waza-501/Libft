/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/20 13:44:55 by ohearn        #+#    #+#                 */
/*   Updated: 2022/06/06 17:57:55 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		return (ft_strdup(s) + start);
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	while (len > 0 && s && start < (ft_strlen(s) + 1))
	{
		sub [i] = s[start];
		start++;
		i++;
		len--;
	}
	sub[i] = 0;
	return (sub);
}

/*
**
** Comments like this are allowed by norminette -Niks
**
*/