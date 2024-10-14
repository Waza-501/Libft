/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mainlstmap.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/14 14:36:12 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/14 18:00:21 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_toupper2(void *content)
{
	char	*str;
	char	*new_str;
	int		i;

	str = (char *)content;
	new_str = malloc(sizeof(char) * (strlen(str) + 1));
	i = 0;
	if (!new_str)
		return (NULL);
	while (str[i])
	{
		new_str[i] = ft_toupper(str[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

int	main(void)
{
	t_list	*list;
	t_list	*new_list;
	t_list	*temp;

	list = ft_lstnew(ft_strdup("Hello"));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("World")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("42")));
	new_list = ft_lstmap(list, &ft_toupper2, &free);
	printf("Original list:\n");
	temp = list;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	printf("\nMapped list:\n");
	temp = new_list;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstclear(&list, &free);
	ft_lstclear(&new_list, &free);
	return (0);
}
