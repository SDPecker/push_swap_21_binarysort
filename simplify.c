/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simplify.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:06:39 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/18 23:07:14 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

stack	simplify(stack *st)
{
	stack	res;
	int		i;
	int		j;
	int		val;

	res.array = (int *)malloc(sizeof(int) * st->size);
	res.size = st->size;
	i = 0;
	j = 0;
	val = 0;
	while (i < res.size)
	{
		val = 0;
		while (j < res.size)
		{
			if (st->array[i] > st->array[j])
				val++;
			j++;
		}
		j = 0;
		res.array[i] = val;
		i++;
	}
	return (res);
}
