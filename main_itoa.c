/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_itoa.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/28 18:13:56 by ohearn        #+#    #+#                 */
/*   Updated: 2022/07/28 18:18:51 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	int		tester;
	char	*result;

	tester = 554;
	result = ft_itoa(tester);
	printf("%d\n", tester);
	printf("%s\n", result);
}