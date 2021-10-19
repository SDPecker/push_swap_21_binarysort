/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:37:43 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/18 22:41:35 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(stack *a)
{
	if (get_min_ind(*a) == 0)
	{
		if (get_max_ind(*a) == 1)
		{
			exec_rra(a);
			exec_sa(a);
		}
	}
	else if (get_max_ind(*a) == 0)
	{
		if (get_min_ind(*a) == 1)
			exec_ra(a);
		else
		{
			exec_sa(a);
			exec_rra(a);
		}
	}
	else
	{
		if (get_min_ind(*a) == 1)
			exec_sa(a);
		else
			exec_rra(a);
	}
}

void	sort_5(stack *a, stack *b)
{
	exec_pb(a, b);
	exec_pb(a, b);
	sort_3(a);
	if (get_max_ind(*b) == 0)
		exec_sb(b);
	if (get_max_ind(*b) == 0)
		exec_sb(b);
	while (b->size > 0)
	{
		if (a->array[0] > b->array[0])
			exec_pa(a, b);
		if ((!get_min_ind(*a) && b->array[0] > max(*a)))
			exec_pa(a, b);
		exec_ra(a);
	}
	while (get_min_ind(*a))
		exec_ra(a);
}

void	sort_2(stack *a)
{
	if (get_max_ind(*a) == 0)
		exec_sa(a);
}
