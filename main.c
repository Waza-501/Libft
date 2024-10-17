/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 12:52:09 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/17 16:16:14 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>

static void	*memstuff(char *s)
{
	char	*new;

	new = (char *)malloc(sizeof(char) * strlen(s) + 1);
	if (!new)
	{
		printf("memstuff error.\n");
		return (NULL);
	}
	ft_strlcpy(new, s, sizeof(s));
	return (new);
}

static void	free_mem(char **data)
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

static void	ft_del(void *content)
{
	if (content)
		free(content);
}

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

void	test_atoi(void)
{
	char	*test;

	test = "+-42";
	printf("String is %s result is %i\n", test, ft_atoi(test));
	printf("String is %s result is %i\n", test, atoi(test));
}

void	test_strchr(void)
{
	char	*test;
	char	*result42;
	char	*result;

	test = "testing";
	result42 = ft_strchr(test, 'W');
	result = strchr(test, 'W');
	printf ("Results:\nlibft-%s\nBase-%s\n", result42, result);
}

void	test_split(void)
{
	char	**test1;
	char	**test2;
	int		idx1;
	int		idx2;

	test1 = ft_split("this is a test", ' ');
	test2 = ft_split("this	one		has			tabs :D", '	');
	idx1 = 0;
	idx2 = 0;
	while (test1 != NULL && test1[idx1])
	{
		printf("%s\n", test1[idx1]);
		idx1++;
	}
	printf("\n\n");
	while (test2 != NULL && test2[idx2])
	{
		printf("%s\n", test2[idx2]);
		idx2++;
	}
	free_mem(test1);
	free_mem(test2);
}

void	test_itoa(void)
{
	int		test;
	int		test2;

	test = 42;
	test2 = -42;
	printf("test 1.\nNumber %i\nString %s\n\n", test, ft_itoa(test));
	printf("test 1.\nNumber %i\nString %s\n\n", test2, ft_itoa(test2));
	printf("test 2.\nNumber %i\nString %s\n\n", INT_MAX, ft_itoa(INT_MAX));
	printf("test 3.\nNumber %i\nString %s\n\n", INT_MIN, ft_itoa(INT_MIN));
}

void	test_bonus(void)
{
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*n4;
	t_list	*temp;
	t_list	*head;
	t_list	**wipe;

	n1 = ft_lstnew(memstuff("Node 1"));
	n2 = ft_lstnew(memstuff("Node 2"));
	n3 = ft_lstnew(memstuff("Node 3"));
	n4 = ft_lstnew(memstuff("Node 4"));
	ft_lstadd_back(&n1, n2);
	head = n1;
	ft_lstadd_front(&head, n4);
	temp = head;
	while (temp != NULL)
	{
		printf("List contains -%s-\n", temp->content);
		temp = temp->next;
	}
	printf("______________________\n");
	ft_lstadd_back(&head, n3);
	ft_lstdelone(n2, ft_del);
	n1->next = n3;
	temp = head;
	while (temp != NULL)
	{
		if (temp->content != NULL)
			printf("List contains -%s-\n", temp->content);
		temp = temp->next;
	}
	printf("______________________\n");
	wipe = &head;
	ft_lstclear(wipe, ft_del);
	temp = head;
	printf("List is wiped\n");
	while (temp != NULL)
	{
		printf("List contains -%s-\n", temp->content);
		temp = temp->next;
	}
	printf("______________________\n");
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (strcmp(argv[1], "strlen") == 0)
			test_strlen();
		else if (strcmp(argv[i], "atoi") == 0)
			test_atoi();
		else if (strcmp(argv[1], "bzero") == 0)
			test_bzero();
		else if (strcmp(argv[i], "strchr") == 0)
			test_strchr();
		else if (strcmp(argv[1], "memmove") == 0)
			test_memmove();
		else if (strcmp(argv[1], "split") == 0)
			test_split();
		else if (strcmp(argv[i], "itoa") == 0)
			test_itoa();
		else if (strcmp(argv[i], "bonus") == 0)
			test_bonus();
		i++;
	}
	printf("\n\ntesting done\n\n");
	return (0);
}
