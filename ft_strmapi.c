/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/17 12:58:32 by ohearn        #+#    #+#                 */
/*   Updated: 2022/07/21 12:28:03 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*string;
	char	*ret;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	string = (char *)s;
	while (string[i])
		i++;
	ret = (char *)malloc(sizeof(char) * (i + 1));
	if (!ret)
		return (NULL);
	ret[i] = 0;
	i--;
	while (i >= 0)
	{
		ret[i] = f(i, string[i]);
		i--;
	}
	return (ret);
}
