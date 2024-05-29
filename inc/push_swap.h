/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 02:50:47 by brvasque          #+#    #+#             */
/*   Updated: 2024/05/29 11:31:26 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stddef.h>

typedef struct s_stacks
{
	int		*a;
	int		*b;
	int		a_size;
	int		b_size;
}				t_stacks;

void	start_stacks(int argc, char *argv[], t_stacks *s);
void	parser(t_stacks *s, char *argv[]);
void	free_and_exit_with_message(t_stacks *s, const char *msg);
int		sorting(t_stacks *s);
void	operations(t_stacks *s);

int		ft_atoi(const char *str);

void	sa(t_stacks *s);
void	sb(t_stacks *s);
void	ss(t_stacks *s);
void	pa(t_stacks *s);
void	pb(t_stacks *s);
void	ra(t_stacks *s);
void	rb(t_stacks *s);
void	rr(t_stacks *s);
void	rra(t_stacks *s);
void	rrb(t_stacks *s);
void	rrr(t_stacks *s);

#endif
