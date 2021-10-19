/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:55:25 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/18 22:55:30 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exec_rr(stack *a, stack *b)
{
	silent_ra(a);
	silent_rb(b);
	write(1, "rr\n", 3);
}

void	exec_rrr(stack *a, stack *b)
{
	silent_rra(a);
	silent_rrb(b);
	write(1, "rrr\n", 4);
}
