/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:35:57 by brvasque          #+#    #+#             */
/*   Updated: 2024/05/29 11:36:48 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stacks *s)
{
	int	tmp;
	int	i;

	if (s->b_size > 1)
	{
		tmp = s->b[s->b_size - 1];
		i = s->b_size - 1;
		while (i > 0)
		{
			s->b[i] = s->b[i - 1];
			i--;
		}
		s->b[0] = tmp;
		ft_printf("rrb\n");
	}
}

void	rrr(t_stacks *s)
{
	rra(s);
	rrb(s);
	ft_printf("rrr\n");
}
