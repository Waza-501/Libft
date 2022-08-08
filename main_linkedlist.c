/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_linkedlist.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/28 19:36:08 by owen          #+#    #+#                 */
/*   Updated: 2022/08/08 19:12:53 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void *malloctime(void *content)
{
	char 	*test;

	test = malloc(sizeof(content));
	ft_strlcpy(test, content, (sizeof(content)));
	return test;
}

void ft_del(void *content)
{
	free(content);
}

int main()
{
	t_list *list_start;
	t_list *second;
	t_list *last;
	t_list *temp;
	t_list *laster;
	t_list **placeholder;
	char	*test;

	list_start = ft_lstnew(malloctime("24"));
	second = ft_lstnew(malloctime("42"));
	last = ft_lstnew(malloctime("68"));
	temp = list_start;
	list_start->next = second;
	second->next = last;
	last->next = NULL;
	while (temp != NULL)
	{
		printf("%s\n",temp->content);
		temp = temp->next;
	}
	printf("\n");
	laster = ft_lstnew(malloctime("4242"));
	ft_lstadd_back(&list_start, laster);
	temp = list_start;
	while (temp != NULL)
	{
		printf("%s\n",temp->content);
		temp = temp->next;
	}
	printf("\n");
	ft_lstdelone(second, ft_del);
	temp = list_start;
	while (temp != NULL)
	{
		printf("%s\n",temp->content);
		temp = temp->next;
	}
	placeholder = &list_start;
	ft_lstclear(placeholder, ft_del);
		temp = list_start;
	while (temp != NULL)
	{
		printf("%s\n",temp->content);
		temp = temp->next;
	}
}