/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_doubles.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:06:36 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/17 19:26:31 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_doubles(stack st)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < st.size)
	{
		while (j < i)
		{
			if (st.array[j] == st.array[i])
				return (1);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
