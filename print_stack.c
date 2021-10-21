/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:49:04 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/21 14:50:21 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

void	print_stack(t_stack st)
{
	int	i;

	i = 0;
	while (i < st.size)
		printf("%i ", st.array[i++]);
	printf("\nSize: %i\nMin_ind: %i\n", st.size, get_min_ind(st));
}
