/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:07:38 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/19 16:58:27 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{	
	stack	a;
	stack	b;

	if (!input_correct(argv, argc))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	a = input_to_stack(argv, argc);
	b.array = (int *)malloc(sizeof(int) * a.size);
	b.size = 0;
	if (has_doubles(a))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (a.size == 3)
		sort_3(&a);
	else if (a.size == 2)
		sort_2(&a);
	else if (a.size == 5)
		sort_5(&a, &b);
	else
		bit_sort(&a, &b);
	//print_stack(a);
	return (0);
}
