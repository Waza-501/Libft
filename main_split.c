/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_split.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/04 15:40:10 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/08 17:11:59 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main()
{
	char **test;

	test = ft_split("Hello this is a test to see if this works", ' ');
	while (*test)
	{
		printf("%s\n", *test);
		test++;
	}
}