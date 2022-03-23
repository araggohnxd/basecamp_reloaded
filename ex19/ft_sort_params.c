/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivei <maolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:44:17 by maolivei          #+#    #+#             */
/*   Updated: 2022/03/23 16:04:03 by maolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_argv(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
			ft_putchar(argv[i][j++]);
		ft_putchar('\n');
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		if (ft_strcmp(argv[i], argv[j]) > 0)
		{
			aux = argv[i];
			argv[i] = argv[j];
			argv[j] = aux;
			i = 0;
		}
		i++;
	}
	ft_print_argv(argv);
}
