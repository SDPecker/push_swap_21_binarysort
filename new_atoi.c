/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:03:10 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/18 23:03:40 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	new_atoi(char *ln)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	if (ln[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (ln[i])
	{
		res = res * 10 + ln[i] - 48;
		i++;
	}
	res *= sign;
	return (res);
}
