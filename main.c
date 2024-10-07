/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owhearn <owhearn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:52:09 by owhearn           #+#    #+#             */
/*   Updated: 2024/10/07 15:17:52 by owhearn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test_memmove(void)
{
	char	string[15];

	strcpy(string, "this is a test");
	printf("String is %s\n", string);
	memmove(string, string + 7, 5);
	printf("String is %s\n", string);
}

void	test_bzero(void)
{
	char	string[15];
	char	string2[15];
	int		modif;

	strcpy(string, "this is a test");
	strcpy(string2, "this is a test");
	modif = 11;
	printf("string is %s\n", string);
	ft_bzero((string + modif), 3);
	bzero(string2 + modif, 3);
	printf("FTBZERO\nstring is %s\nBZERO\nstring is %s\n", string, string2);
}

void	test_strlen(void)
{
	char	*string;

	string = "This is a test";
	printf("The string is %s\n", string);
	printf("The length of string is %zu\n", ft_strlen(string));
	printf("The original strlen says it's %zu\n", strlen(string));
}

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		printf("One at a time please\n");
		return (0);
	}
	printf("temp\n");
	printf("Arguments are %s, %s\n", argv[0], argv[1]);
	if (strcmp(argv[1], "strlen") == 0)
		test_strlen();
	if (strcmp(argv[1], "bzero") == 0)
		test_bzero();
	else if (strcmp(argv[1], "memmove") == 0)
		test_memmove();
	printf("\n\ntesting done\n\n");
	return (0);
}
