/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:36:47 by brvasque          #+#    #+#             */
/*   Updated: 2024/05/29 11:36:12 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sa(t_stacks *s)
{
	if (s->a_size > 1)
		swap(&s->a[0], &s->a[1]);
	ft_printf("sa\n");
}

void	sb(t_stacks *s)
{
	if (s->b_size > 1)
		swap(&s->b[0], &s->b[1]);
	ft_printf("sb\n");
}

void	ss(t_stacks *s)
{
	sa(s);
	sb(s);
	ft_printf("ss\n");
}

void	pa(t_stacks *s)
{
	int	i;

	if (s->b_size > 0)
	{
		i = s->a_size;
		while (i > 0)
		{
			s->a[i] = s->a[i - 1];
			i--;
		}
		s->a[0] = s->b[0];
		i = 0;
		while (i < s->b_size - 1)
		{
			s->b[i] = s->b[i + 1];
			i++;
		}
		s->a_size++;
		s->b_size--;
		ft_printf("pa\n");
	}
}
