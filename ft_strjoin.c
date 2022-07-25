/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/31 11:23:27 by ohearn        #+#    #+#                 */
/*   Updated: 2022/07/25 19:33:01 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	int		i;	

	if (!s1 || !s2)
		return (NULL);
	new_string = (char *)malloc(ft_strlen (s1) + ft_strlen (s2) + 1);
	i = 0;
	if (!new_string)
		return (NULL);
	while (*s1)
	{
		new_string[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		new_string[i] = *s2;
		i++;
		s2++;
	}
	new_string[i] = 0;
	return (new_string);
}
