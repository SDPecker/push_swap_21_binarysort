/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_correct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:58:41 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/21 14:50:21 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	input_correct(char **input, int n)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < n)
	{
		if (input[i][j] == '-')
			j++;
		if (!input[i][j])
			return (0);
		while (input[i][j])
		{
			if (input[i][j] < '0' || input[i][j] > '9')
				return (0);
			j++;
		}
		if (!check_input_num(input[i]))
			return (0);
		i++;
		j = 0;
	}
	return (1);
}
