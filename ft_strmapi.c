/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/17 12:58:32 by ohearn        #+#    #+#                 */
/*   Updated: 2022/07/25 19:31:25 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*copy_s;
	int		i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	copy_s = (char *)malloc(sizeof(char) * (i + 1));
	if (!copy_s)
		return (NULL);
	copy_s[i] = 0;
	i--;
	while (i >= 0)
	{
		copy_s[i] = f(i, s[i]);
		i--;
	}
	return (copy_s);
}
