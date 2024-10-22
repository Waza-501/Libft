/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 12:44:37 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/22 14:42:12 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	long	ret;
	int		negative;

	ret = 0;
	negative = 1;
	while (*ptr == ' ' || (*ptr >= 9 && *ptr <= 13))
		ptr++;
	if (*ptr == '-' || *ptr == '+')
	{
		if (*ptr == '-')
			negative *= -1;
		ptr++;
	}
	while (*ptr >= '0' && *ptr <= '9')
	{
		ret = ret * 10 + *ptr - '0';
		ptr++;
	}
	return (ret * negative);
}
