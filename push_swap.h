/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:07:44 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/19 16:53:10 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

typedef struct stack
{
int	*array;
int	size;
}stack;

void	exec_pa(stack *a, stack *b);
void	exec_pb(stack *a, stack *b);
void	exec_ra(stack *a);
void	exec_rb(stack *b);
void	exec_rra(stack *a);
void	exec_rrb(stack *b);
void	exec_rr(stack *a, stack *b);
void	exec_rrr(stack *a, stack *b);
void	exec_sa(stack *a);
void	exec_sb(stack *a);
void	exec_ss(stack *a, stack *b);

void	silent_pa(stack *a, stack *b);
void	silent_pb(stack *a, stack *b);
void	silent_ra(stack *a);
void	silent_rb(stack *b);
void	silent_rra(stack *a);
void	silent_rrb(stack *b);
void	silent_rr(stack *a, stack *b);
void	silent_rrr(stack *a, stack *b);
void	silent_sa(stack *a);
void	silent_sb(stack *a);
void	silent_ss(stack *a, stack *b);

int		is_number(const char *ln);
int		new_atoi(char *ln);
stack	input_to_stack(char **input, int n);
int		input_correct(char **input, int	n);
void	free_stack(stack *st);
int		has_doubles(stack st);
int		get_max_ind(stack st);
int		get_min_ind(stack st);
int		max(stack st);
int		get_max_bit(int num);

stack	simplify(stack *st);

void	print_stack(stack st);

void	sort_2(stack *a);
void	sort_3(stack *st);
void	sort_5(stack *a, stack *b);
void	bit_sort(stack *a, stack *b);