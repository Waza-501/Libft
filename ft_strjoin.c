/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/31 11:23:27 by ohearn        #+#    #+#                 */
/*   Updated: 2022/07/26 20:13:35 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	int		tally;	

	if (!s1 || !s2)
		return (NULL);
	new_string = (char *)malloc(ft_strlen (s1) + ft_strlen (s2) + 1);
	tally = 0;
	if (!new_string)
		return (NULL);
	while (*s1)
	{
		new_string[tally] = *s1;
		tally++;
		s1++;
	}
	while (*s2)
	{
		new_string[tally] = *s2;
		tally++;
		s2++;
	}
	new_string[tally] = 0;
	return (new_string);
}
