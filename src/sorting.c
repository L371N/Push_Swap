/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:17:09 by brvasque          #+#    #+#             */
/*   Updated: 2024/05/29 12:09:06 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stacks *s)
{
	int	i;

	if (s->a_size > 0)
	{
		i = s->b_size;
		while (i > 0)
		{
			s->b[i] = s->b[i - 1];
			i--;
		}
		s->b[0] = s->a[0];
		i = 0;
		while (i < s->a_size - 1)
		{
			s->a[i] = s->a[i + 1];
			i++;
		}
		s->a_size--;
		s->b_size++;
		ft_printf("pb\n");
	}
}

void	ra(t_stacks *s)
{
	int	tmp;
	int	i;

	if (s->a_size > 1)
	{
		tmp = s->a[0];
		i = 0;
		while (i < s->a_size - 1)
		{
			s->a[i] = s->a[i + 1];
			i++;
		}
		s->a[s->a_size - 1] = tmp;
		ft_printf("ra\n");
	}
}

void	radix_sort(t_stacks *s)
{
	int	j;
	int	bit_size;
	int	size;

	bit_size = 0;
	size = s->a_size;
	while (size > 1 && ++bit_size)
		size /= 2;
	j = -1;
	while (++j <= bit_size)
	{
		size = s->a_size;
		while (size-- && !is_array_sorted(s))
		{
			if (((s->a[0] >> j) & 1) == 0)
				pb(s);
			else
				ra(s);
		}
		while (s->b_size != 0)
			pa(s);
	}
}
