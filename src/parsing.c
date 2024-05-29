/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:17:04 by brvasque          #+#    #+#             */
/*   Updated: 2024/05/29 14:49:58 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid_number(const char *str)
{
	if (*str == '-' || *str == '+')
	{
		str++;
	}
	if (!*str)
	{
		return (0);
	}
	while (*str)
	{
		if (!ft_isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

void	parser(t_stacks *s, char *argv[])
{
	int		i;

	i = 0;
	while (i < s->a_size)
	{
		if (!is_valid_number(argv[i + 1]))
		{
			free_and_exit_with_message(s, "Error\n");
		}
		s->a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	radix_sort(s);
}

/*void	parser(t_stacks *s, char *argv[])
{
	int		i;

	i = 1;
	while (i < s->a_size + 1)
	{
		s->a[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	radix_sort(s);
}*/

void	free_and_exit_with_message(t_stacks *s, const char *msg)
{
	if (s)
	{
		if (s->a)
		{
			free(s->a);
		}
		if (s->b)
		{
			free(s->b);
		}
	}
	if (msg)
		write(2, msg, ft_strlen(msg));
	exit(1);
}

void	start_stacks(int argc, t_stacks *s)
{
	s->a_size = argc - 1;
	s->b_size = 0;
	s->a = (int *)malloc(s->a_size * sizeof(int));
	s->b = (int *)malloc(s->a_size * sizeof(int));
	if (!s->a || !s->b)
	{
		free_and_exit_with_message(s, "Error\n");
	}
}
