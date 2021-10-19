/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_num.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:25:48 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/19 20:57:30 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *ln)
{
	int	i;

	i = 0;
	while (ln[i])
		i++;
	return (i);
}

int	check_input_num(char *input)
{
	int		i;
	int		j;
	char	*max_int;

	max_int = "2147483647";
	i = 0;
	j = 0;
	if (input[i] == '-')
		i++;
	if (ft_strlen(input + i) < 10)
		return (1);
	if (ft_strlen(input + i) > 10)
		return (0);
	while (j < ft_strlen(input + i))
	{
		if ((input + i)[j] > max_int[j])
			return (0);
		if ((input + i)[j] < max_int[j])
			return (1);
		j++;
	}
	return (1);
}