#include "libft.h"
#include <stdio.h>
#include <string.h>

void test_memmove(void)
{
	char	string[15];

	strcpy(string, "this is a test");
	printf("String is %s\n", string);
	ft_memmove(string[7], 5);
	printf("String is %s\n", string);

}

void test_bzero(void)
{
	char	string[15];

	strcpy(string, "this is a test");
	printf("string is %s\n", string);
	ft_bzero((string + 10), 3);
	printf("string is %s\n", string);
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
	if (strcmp(argv[1], "bzero") == 0)
		test_bzero();
	else if (strcmp(argv[1], "memmove"))
		test_memmove();
	printf("testing done\n");
	return (0);
}
