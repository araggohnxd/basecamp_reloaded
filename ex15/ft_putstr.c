/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:51:47 by maolivei          #+#    #+#             */
/*   Updated: 2022/03/23 17:59:45 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}