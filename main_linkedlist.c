/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_linkedlist.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/28 19:36:08 by owen          #+#    #+#                 */
/*   Updated: 2022/08/01 16:21:13 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	t_list *list_start;
	t_list *second;
	t_list *last;
	t_list *temp;
	t_list *laster;
	t_list **placeholder;

	list_start = ft_lstnew((void *)"42");
	second = ft_lstnew((void *)"24");
	last = ft_lstnew((void *)"68");
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
	placeholder = &list_start;
	laster = ft_lstnew((void*)"This works as well now");
	ft_lstadd_back(&list_start, laster);
	temp = list_start;
	while (temp != NULL)
	{
		printf("%s\n",temp->content);
		temp = temp->next;
	}
}