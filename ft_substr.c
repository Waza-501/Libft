/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/20 13:44:55 by ohearn        #+#    #+#                 */
/*   Updated: 2022/07/26 20:20:01 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	int		length;

	length = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		return (ft_strdup(s + start));
	substring = (char *)malloc(len + 1);
	if (!substring)
		return (NULL);
	while (len > 0 && s && start < (ft_strlen(s) + 1))
	{
		substring [length] = s[start];
		start++;
		length++;
		len--;
	}
	substring[length] = 0;
	return (substring);
}
