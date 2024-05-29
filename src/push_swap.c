/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:19:05 by brvasque          #+#    #+#             */
/*   Updated: 2024/05/29 12:08:28 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_if_sorted_or_has_duplicate(t_stacks *s, int i)
{
	int		j;

	j = 0;
	if (i == 0)
	{
		while (i < s->a_size)
		{
			j = i + 1;
			while (j < s->a_size)
			{
				if (s->a[i] == s->a[j])
					free_and_exit_with_message(s, "Error\n");
				j++;
			}
			i++;
		}
	}
	if (is_array_sorted(s))
		free_and_exit_with_message(s, NULL);
}

static void	validate_arguments(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	if (argc < 2)
		free_and_exit_with_message(NULL, "Error\n");
	while (++i < argc)
	{
		j = 0;
		if (!argv[i][0] || (argv[i][0] && argv[i][0] == ' '))
			free_and_exit_with_message(NULL, "Error\n");
		while (argv[i][j] != '\0')
		{
			if ((!(ft_isdigit(argv[i][j])) && (argv[i][j] != ' ')
				&& (argv[i][j] != '-' && argv[i][j] != '+'
				&& argv[i][j] != ' '))
				|| (argv[i][j] == '-' && argv[i][j + 1] == '\0')
				|| (argv[i][j] == '+' && argv[i][j + 1] == '\0')
				|| (argv[i][j] == '-' && argv[i][j + 1] == ' ')
				|| (argv[i][j] == '+' && argv[i][j + 1] == ' '))
				free_and_exit_with_message(NULL, "Error\n");
			j++;
		}
	}
}

int	main(int argc, char **argv)
{
	t_stacks	*s;

	validate_arguments(argc, argv);
	s = malloc(sizeof(*s));
	if (s == NULL)
		exit(1);
	start_stacks(argc, s);
	parser(s, argv);
	exit_if_sorted_or_has_duplicate(s, 0);
	free(s->a);
	free(s->b);
	free(s);
	return (0);
}
