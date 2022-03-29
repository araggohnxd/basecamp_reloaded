/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:43:43 by maolivei          #+#    #+#             */
/*   Updated: 2022/03/28 22:09:31 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	returns;

	returns = 0;
	while (*tab)
		if ((*f)(*tab++))
			returns++;
	return (returns);
}
