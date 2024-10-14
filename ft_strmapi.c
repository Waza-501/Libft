/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/11 11:36:54 by owen          #+#    #+#                 */
/*   Updated: 2024/10/14 11:28:34 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int		idx;

	if (!s)
		return (NULL);
	idx = ft_strlen(s);
	ret = (char *)malloc(sizeof(char) * (idx + 1));
	if (!ret)
		return (NULL);
	ret[idx] = '\0';
	idx--;
	while (idx >= 0)
	{
		ret[idx] = (f(idx, s[idx]));
		idx--;
	}
	return (ret);
}
