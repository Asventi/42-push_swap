/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:05:42 by pjarnac           #+#    #+#             */
/*   Updated: 2024/12/16 14:12:36 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"
#include "operations.h"
#include "sort.h"
#include <stdlib.h>
#include <stdbool.h>

void	do_presort(t_stacks *stacks, int n)
{
	while (n > 0)
	{
		presort(stacks, n);
		n -= 2;
	}
}

int	check_next(t_stacks *stacks, int next)
{
	if (next == 0 && stacks->b[0] == stacks->b_size - 2)
	{
		pa(stacks);
		return (1);
	}
	return (0);
}

void	sort(t_stacks *stacks)
{
	int	idx;
	int	next;
	int	val;

	do_presort(stacks, 22);
	while (stacks->b_size != 0)
	{
		next = 0;
		val = stacks->b_size - 1;
		idx = get_idx(stacks->b, stacks->b_size, val);
		while (stacks->b[0] != val)
		{
			if (next == 0)
				next = check_next(stacks, next);
			if (next != 1 && idx >= stacks->b_size / 2)
				rrb(stacks);
			else if (next != 1)
				rb(stacks);
			if (next == 1)
				next = 3;
		}
		pa(stacks);
		if (next)
			sa(stacks);
	}
}
