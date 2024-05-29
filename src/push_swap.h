/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 02:50:47 by brvasque          #+#    #+#             */
/*   Updated: 2024/05/29 14:42:08 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"
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

void	start_stacks(int argc, t_stacks *s);
void	parser(t_stacks *s, char *argv[]);
void	free_and_exit_with_message(t_stacks *s, const char *msg);
int		sorting(t_stacks *s);
void	operations(t_stacks *s);
int		is_array_sorted(t_stacks *s);
void	swap(int *a, int *b);
void	sort_three_elements(t_stacks *s);
void	sort_four_to_five_elements(t_stacks *s);
void	radix_sort(t_stacks *s);
int		is_valid_number(const char *str);

int		t_atoi(const char *str);

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
