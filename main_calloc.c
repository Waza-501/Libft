/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_calloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/01 13:00:10 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/01 13:35:33 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	printf("Test start\n");
	ft_calloc(325352, 0);
	printf("\n");
	calloc(325352, 0);
	printf("Test succesfull!\n");
}