/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 12:52:09 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/09 12:44:35 by owen          ########   odam.nl         */
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

void	test_split(void)
{
	char	**test1;
	char	**test2;

	test1 = ft_split("this is a test", ' ');
	test2 = ft_split("this	one		has			tabs :D", '	');
	while (test1 != NULL && *test1)
	{
		printf("%s\n", *test1);
		test1++;
	}
	printf("\n\n");
	while (test2 != NULL && *test2)
	{
		printf("%s\n", *test2);
		test2++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	// if (argc > 2)
	// {
	// 	printf("One at a time please\n");
	// 	return (0);
	// }
	while (argv[i])
	{
		if (strcmp(argv[1], "strlen") == 0)
			test_strlen();
		else if (strcmp(argv[1], "bzero") == 0)
			test_bzero();
		else if (strcmp(argv[1], "memmove") == 0)
			test_memmove();
		else if (strcmp(argv[1], "split") == 0)
			test_split();
	}
	printf("\n\ntesting done\n\n");
	return (0);
}
