/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   silent_rr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:56:07 by amohiam           #+#    #+#             */
/*   Updated: 2021/10/18 22:56:37 by amohiam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	silent_rr(stack *a, stack *b)
{
	silent_ra(a);
	silent_rb(b);
}

void	silent_rrr(stack *a, stack *b)
{
	silent_rra(a);
	silent_rrb(b);
}
