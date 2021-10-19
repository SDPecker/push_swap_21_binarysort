/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min_ind.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:43:25 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/18 23:02:44 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_ind(stack st)
{
	int	res;
	int	i;

	res = 0;
	i = 1;
	while (i < st.size)
	{
		if (st.array[i] > st.array[res])
			res = i;
		i++;
	}
	return (res);
}

int	get_min_ind(stack st)
{
	int	res;
	int	i;

	res = 0;
	i = 1;
	while (i < st.size)
	{
		if (st.array[i] < st.array[res])
			res = i;
		i++;
	}
	return (res);
}

int	max(stack st)
{
	return (st.array[get_max_ind(st)]);
}
