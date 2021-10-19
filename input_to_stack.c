/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_to_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:07:07 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/19 21:14:14 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	input_to_stack(char **input, int n)
{
	int		i;
	t_stack	result;

	i = 0;
	result.size = n - 1;
	result.array = (int *)malloc(sizeof(int) * n);
	while (i < result.size)
	{
		result.array[i] = new_atoi(input[i + 1]);
		i++;
	}
	return (result);
}

void	free_stack(t_stack *st)
{
	st->size = 0;
	free(st->array);
	st->array = 0;
}
