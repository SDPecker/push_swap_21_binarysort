/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:06:43 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/19 21:14:14 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exec_sa(t_stack *a)
{
	int	buf;

	buf = a->array[0];
	if (a->size > 1)
	{
		a->array[0] = a->array[1];
		a->array[1] = buf;
	}
	write(1, "sa\n", 3);
}

void	exec_sb(t_stack *b)
{
	int	buf;

	buf = b->array[0];
	if (b->size > 1)
	{
		b->array[0] = b->array[1];
		b->array[1] = buf;
	}
	write(1, "sb\n", 3);
}

void	exec_ss(t_stack *a, t_stack *b)
{
	silent_sa(a);
	silent_sb(b);
	write(1, "ss\n", 3);
}
