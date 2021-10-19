/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   silent_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 21:12:25 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/18 23:08:01 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	silent_sa(stack *a)
{
	int	buf;

	buf = a->array[0];
	if (a->size > 1)
	{
		a->array[0] = a->array[1];
		a->array[1] = buf;
	}
}

void	silent_sb(stack *b)
{
	int	buf;

	buf = b->array[0];
	if (b->size > 1)
	{
		b->array[0] = b->array[1];
		b->array[1] = buf;
	}
}

void	silent_ss(stack *a, stack *b)
{
	silent_sa(a);
	silent_sb(b);
}
