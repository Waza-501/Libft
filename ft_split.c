/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/09 14:20:12 by ohearn        #+#    #+#                 */
/*   Updated: 2022/07/25 19:18:05 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	counter(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

static void	free_strings(char **strings)
{
	int		i;

	i = 0;
	while (strings[i])
	{
		free(strings[i]);
		i++;
	}
	free(strings);
}

static int	splitter(char **strings, char const *s, char c, int wordcount)
{
	int		i;
	int		j;

	j = 0;
	while (j < wordcount)
	{
		i = 0;
		while (*s && c == *s)
			s++;
		while (s[i] && c != s[i])
			i++;
		strings[j] = ft_substr(s, 0, i);
		if (!strings[j])
		{
			free_strings(strings);
			strings = NULL;
			return (-1);
		}
		s += i;
		j++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		wordcount;
	int		zach;

	if (!s)
		return (NULL);
	wordcount = counter(s, c);
	strings = (char **)malloc(sizeof (char *) * (wordcount + 1));
	if (!strings)
		return (NULL);
	strings[wordcount] = 0;
	zach = splitter(strings, s, c, wordcount);
	if (zach != 0)
		return (NULL);
	return (strings);
}
