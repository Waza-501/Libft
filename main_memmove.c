/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_memmove.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/28 18:21:09 by ohearn        #+#    #+#                 */
/*   Updated: 2022/07/28 18:54:50 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main()
{
	char	string1[100] = "Learningisfun";
	char	string2[100] = "Learningisfun";
	char	*result;
	char	*result2;
	char	*lib1;
	char	*lib2;

	result = string1;
	lib1 = string1;
	printf("Original string: %s\n", string1);
	printf("Original string: %s\n", string2);
	ft_memmove(result +8, result, 10);
	memmove(lib1 +8, lib1, 10);
	printf("Modified string FT version, %s\n", result);
	printf("Modified string regular version, %s\n", lib1);
}