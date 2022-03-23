/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:39:29 by maolivei          #+#    #+#             */
/*   Updated: 2022/03/23 17:51:02 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	while ((x * x) < nb && x < 46340)
		x++;
	if (x * x == nb)
		return (x);
	return (0);
}
