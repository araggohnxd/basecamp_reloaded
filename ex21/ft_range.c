/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:50:14 by maolivei          #+#    #+#             */
/*   Updated: 2022/03/23 17:09:51 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	range = malloc(sizeof(int) * (max - min));
	if (range == NULL || min >= max)
		return (NULL);
	i = 0;
	while (min < max)
		range[i++] = min++;
	return (range);
}
