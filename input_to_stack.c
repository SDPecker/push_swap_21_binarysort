/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_to_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:07:07 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/17 19:45:02 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

stack	input_to_stack(char **input, int n)
{
	int		i;
	stack	result;

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

void	free_stack(stack *st)
{
	st->size = 0;
	free(st->array);
	st->array = 0;
}
