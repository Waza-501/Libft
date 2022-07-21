/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/13 17:36:18 by ohearn        #+#    #+#                 */
/*   Updated: 2022/07/21 12:25:44 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*temp;
	t_list		*temp2;

	temp = *lst;
	while (temp)
	{
		temp2 = temp;
		del(temp->content);
		temp = temp->next;
		free(temp2);
	}
	*lst = NULL;
}
