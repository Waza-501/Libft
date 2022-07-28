/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/23 17:52:45 by ohearn        #+#    #+#                 */
/*   Updated: 2022/07/26 20:12:12 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		tally;

	if (!s || !f)
		return ;
	tally = 0;
	while (s[tally])
	{
		f(tally, &s[tally]);
		tally++;
	}
}
