/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:50:14 by maolivei          #+#    #+#             */
/*   Updated: 2022/03/28 22:08:51 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
		range[i++] = min++;
	return (range);
}
