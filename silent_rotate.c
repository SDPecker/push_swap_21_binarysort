/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   silent_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 21:12:49 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/18 22:56:37 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	silent_ra(stack *a)
{
	int		i;
	int		buf;

	i = 0;
	buf = a->array[0];
	if (a->size >= 2)
	{
		while (i < a->size - 1)
		{
			a->array[i] = a->array[i + 1];
			i++;
		}
		a->array[i] = buf;
	}
}

void	silent_rb(stack *b)
{
	int		i;
	int		buf;

	i = 0;
	buf = b->array[0];
	if (b->size >= 2)
	{
		while (i < b->size - 1)
		{
			b->array[i] = b->array[i + 1];
			i++;
		}
		b->array[i] = buf;
	}
}

void	silent_rra(stack *a)
{
	int	i;
	int	buf;

	i = a->size - 1;
	buf = a->array[a->size - 1];
	if (a->size >= 2)
	{
		while (i > 0)
		{
			a->array[i] = a->array[i - 1];
			i--;
		}
		a->array[i] = buf;
	}
}

void	silent_rrb(stack *b)
{
	int	i;
	int	buf;

	i = b->size - 1;
	buf = b->array[b->size - 1];
	if (b->size >= 2)
	{
		while (i > 0)
		{
			b->array[i] = b->array[i - 1];
			i--;
		}
		b->array[i] = buf;
	}
}
