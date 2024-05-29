/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:34:45 by brvasque          #+#    #+#             */
/*   Updated: 2024/05/29 11:52:23 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stacks *s)
{
	int	tmp;
	int	i;

	if (s->b_size > 1)
	{
		tmp = s->b[0];
		i = 0;
		while (i < s->b_size - 1)
		{
			s->b[i] = s->b[i + 1];
			i++;
		}
		s->b[s->b_size - 1] = tmp;
		ft_printf("rb\n");
	}
}

void	rr(t_stacks *s)
{
	ra(s);
	rb(s);
	ft_printf("rr\n");
}

void	rra(t_stacks *s)
{
	int	tmp;
	int	i;

	if (s->a_size > 1)
	{
		tmp = s->a[s->a_size - 1];
		i = s->a_size - 1;
		while (i > 0)
		{
			s->a[i] = s->a[i - 1];
			i--;
		}
		s->a[0] = tmp;
		ft_printf("rra\n");
	}
}
