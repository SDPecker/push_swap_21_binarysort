/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:24:23 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/19 21:14:14 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> //TESTING ONLY!

void	bit_sort(t_stack *a, t_stack *b)
{
	int		i;
	int		j;
	int		init_size;

	i = 0;
	j = 0;
	init_size = a->size;
	*a = simplify(a);
	while (i <= get_max_bit(max(*a)))
	{
		while (j < init_size)
		{
			if ((a->array[0] >> i & 1) == 0)
				exec_pb(a, b);
			else
				exec_ra(a);
			j++;
		}
		while (b->size > 0)
			exec_pa(a, b);
		j = 0;
		i++;
	}
}

int	get_max_bit(int num)
{
	int	tmp;
	int	res;

	tmp = num;
	res = 0;
	while(tmp / 2 > 0)
	{
		res++;
		tmp /= 2;
	}
	return(res);
}
