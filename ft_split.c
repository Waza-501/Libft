/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 17:18:26 by owen          #+#    #+#                 */
/*   Updated: 2024/10/09 12:42:48 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_words(const char *s, char c)
{
	int	count;
	int	idx;

	count = 0;
	idx = 0;
	while (s[idx])
	{
		while (s[idx] && s[idx] == c)
			idx++;
		if (s[idx])
		{
			while (s[idx] && s[idx] != c)
				idx++;
			count++;
		}
	}
	return (count);
}

void	free_mem(char **data)
{
	int	i;

	i = 0;
	while (data[i])
	{
		free(data[i]);
		i++;
	}
	free(data);
}

int	fill_words(char **ret, const char *str, char c, int count)
{
	int	idx;
	int	i;

	idx = 0;
	while (idx < count)
	{
		i = 0;
		while (*str && c == *str)
			str++;
		while (str[i] && c != str[i])
			i++;
		ret[idx] = ft_substr(str, 0, i);
		if (!ret[idx])
		{
			free_mem(ret);
			ret = NULL;
			return (-1);
		}
		str += i;
		idx++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	int		error;
	char	**ret;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	ret = (char **)malloc(sizeof(char *) * (count + 1));
	if (!ret)
		return (NULL);
	ret[count] = '\0';
	error = fill_words(ret, s, c, count);
	if (error != 0)
		return (NULL);
	return (ret);
}
