/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_commands.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:59:09 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/25 10:25:48 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*read_command(void)
{
	int		reader;
	char	*res;
	int		i;

	res = (char *)malloc(3);
	i = 0;
	reader = read(0, res, 1);
	if (reader == 0)
		return (NULL);
	while (reader > 0 && res[i] != '\n')
	{
		i++;
		reader = read(0, res + i, 1);
	}
	return (res);
}

void	run_command(char *com, t_stack *a, t_stack *b)
{
	if (com[0] == 's')
		run_swap(com, a, b);
	if (com[0] == 'p')
		run_push(com, a, b);
	if (com[0] == 'r')
		run_rotate(com, a, b);
}

void	run_swap(char *com, t_stack *a, t_stack *b)
{
	if (com[1] == 'a')
		silent_sa(a);
	if (com[1] == 'b')
		silent_sb(b);
	if (com[1] == 's')
		silent_ss(a, b);
}

void	run_push(char *com, t_stack *a, t_stack *b)
{
	if (com[1] == 'a')
		silent_pa(a, b);
	if (com[1] == 'b')
		silent_pb(a, b);
}

void	run_rotate(char *com, t_stack *a, t_stack *b)
{
	if (com[1] == 'a')
		silent_ra(a);
	if (com[1] == 'b')
		silent_rb(b);
	if (com[1] == 'r')
	{
		if (com[2] == '\n')
			silent_rr(a, b);
		if (com[2] == 'a')
			silent_rra(a);
		if (com[2] == 'b')
			silent_rrb(b);
		if (com[2] == 'r')
			silent_rrr(a, b);
	}
}
