/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/18 16:02:46 by ohearn        #+#    #+#                 */
/*   Updated: 2022/06/03 18:08:17 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*copy;

	copy = (char *)malloc(ft_strlen(s1) + 1);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s1, ft_strlen(s1) + 1);
	return (copy);
}

// int	main()
// {
// 	char	source[] = "This is just a test";
// 	char* target = strdup(source);
// 	printf("copy: %s | strdup: %s \n", ft_strdup(source), target);
// 	return(0);
// }