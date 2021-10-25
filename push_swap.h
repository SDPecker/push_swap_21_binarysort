/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:07:44 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/25 12:12:50 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

typedef struct stack
{
	int	*array;
	int	size;
}t_stack;

void	exec_pa(t_stack *a, t_stack *b);
void	exec_pb(t_stack *a, t_stack *b);
void	exec_ra(t_stack *a);
void	exec_rb(t_stack *b);
void	exec_rra(t_stack *a);
void	exec_rrb(t_stack *b);
void	exec_rr(t_stack *a, t_stack *b);
void	exec_rrr(t_stack *a, t_stack *b);
void	exec_sa(t_stack *a);
void	exec_sb(t_stack *a);
void	exec_ss(t_stack *a, t_stack *b);

void	silent_pa(t_stack *a, t_stack *b);
void	silent_pb(t_stack *a, t_stack *b);
void	silent_ra(t_stack *a);
void	silent_rb(t_stack *b);
void	silent_rra(t_stack *a);
void	silent_rrb(t_stack *b);
void	silent_rr(t_stack *a, t_stack *b);
void	silent_rrr(t_stack *a, t_stack *b);
void	silent_sa(t_stack *a);
void	silent_sb(t_stack *a);
void	silent_ss(t_stack *a, t_stack *b);

int		is_number(const char *ln);
int		is_sorted(int *arr, int size);
int		new_atoi(char *ln);
t_stack	input_to_stack(char **input, int n);
int		input_correct(char **input, int	n);
void	free_stack(t_stack *st);
int		has_doubles(t_stack st);
int		get_max_ind(t_stack st);
int		get_min_ind(t_stack st);
int		max(t_stack st);
int		get_max_bit(int num);
int		check_input_num(char *input);

t_stack	simplify(t_stack *st);

void	print_stack(t_stack st);

void	sort_2(t_stack *a);
void	sort_3(t_stack *st);
void	sort_5(t_stack *a, t_stack *b);
void	bit_sort(t_stack *a, t_stack *b);

char	*read_command(void);
void	run_command(char *com, t_stack *a, t_stack *b);
void	run_swap(char *com, t_stack *a, t_stack *b);
void	run_push(char *com, t_stack *a, t_stack *b);
void	run_rotate(char *com, t_stack *a, t_stack *b);
int		ret_error(void);
int		com_cycle(t_stack *a, t_stack *b);
int		com_error(char *com);
int		ft_strlen(char *ln);
#endif