/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:15:10 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/25 12:17:08 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	int		error;

	if (!input_correct(argv, argc))
		return (ret_error());
	a = input_to_stack(argv, argc);
	b.array = (int *)malloc(sizeof(int) * a.size);
	b.size = 0;
	if (has_doubles(a))
		return (ret_error());
	error = com_cycle(&a, &b);
	if (error)
		return (1);
	if (!is_sorted(a.array, a.size) || b.size)
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	return (0);
}

int	ret_error(void)
{
	write(1, "Error\n", 6);
	return (1);
}

int	com_cycle(t_stack *a, t_stack *b)
{
	char	*com;
	int		error;

	com = read_command();
	error = 0;
	while (com != NULL)
	{
		if (com_error(com))
		{
			free(com);
			return (ret_error());
		}
		run_command(com, a, b);
		free(com);
		com = read_command();
	}
	free(com);
	return (0);
}

int	com_error(char *com)
{
	if (ft_strlen(com) < 3 || ft_strlen(com) > 4)
		return (1);
	if (com[0] == 'p' || com[0] == 's')
		if (com[1] == 'a' || com[1] == 'b')
			if (com[2] == '\n')
				return (0);
	if (com[0] == 'r')
	{
		if (com[1] == 'a' || com[1] == 'b' || com[1] == 'r')
		{
			if (com[2] == '\n' || com[2] == 'a')
				return (0);
			if (com[2] == 'b' || com[2] == 'r')
				return (0);
		}
	}
	return (1);
}
