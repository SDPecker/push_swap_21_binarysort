/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:15:10 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/21 15:30:10 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	char	*com;

	if (!input_correct(argv, argc))
		return (0);
	a = input_to_stack(argv, argc);
	b.array = (int *)malloc(sizeof(int) * a.size);
	b.size = 0;
	if (has_doubles(a))
		return (0);
	com = read_command();
	while (com != NULL)
	{
		run_command(com, &a, &b);
		com = read_command();
	}
	if (!is_sorted(a.array, a.size) || b.size)
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	return (0);
}
