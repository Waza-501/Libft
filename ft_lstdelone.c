/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/11 13:38:42 by owen          #+#    #+#                 */
/*   Updated: 2024/10/11 19:55:09 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
	/*t_list	*temp;

	if (!lst)
		return ;
	temp = lst;
	if (del)
	{
		lst = lst->next;
		del(temp->content);
		free(temp);
	}*/
}
