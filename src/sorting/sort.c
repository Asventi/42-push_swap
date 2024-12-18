/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:05:42 by pjarnac           #+#    #+#             */
/*   Updated: 2024/12/18 14:45:22 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"
#include "operations.h"
#include "sort.h"

static void	sorta3(t_stacks *stacks, int size)
{
	if (size == 2 && stacks->a[0] > stacks->a[1])
		sa(stacks);
	if (size < 3 || is_sort(stacks->a, stacks->a_size))
		return ;
	if (stacks->a[2] > stacks->a[1] && stacks->a[2] > stacks->a[0])
		sa(stacks);
	else if (stacks->a[0] < stacks->a[1] && stacks->a[0] < stacks->a[2])
	{
		rra(stacks);
		sa(stacks);
	}
	else if (stacks->a[0] > stacks->a[2] && stacks->a[1] > stacks->a[0])
		rra(stacks);
	else if (stacks->a[2] < stacks->a[0] && stacks->a[2] > stacks->a[1])
		ra(stacks);
	else if (stacks->a[1] < stacks->a[0] && stacks->a[1] > stacks->a[2])
	{
		ra(stacks);
		sa(stacks);
	}
}

static void	do_presort(t_stacks *stacks)
{
	presort(stacks, stacks->size / 14 + 2);
	sorta3(stacks, stacks->a_size);
}

static int	shift(t_stacks *stacks)
{
	if (stacks->b[0] == stacks->b_size - 2)
	{
		pa(stacks);
		return (1);
	}
	return (0);
}

// Dir (direction): 0 to go up, 1 to go down
static void	shift_back(t_stacks *stacks, int shifted, int dir)
{
	if (dir == 1)
	{
		while (shifted > 0)
		{
			rra(stacks);
			shifted--;
		}
	}
	else
	{
		while (shifted > 0)
		{
			ra(stacks);
			shifted--;
		}
	}
}

void	sort(t_stacks *stacks)
{
	int	idx;
	int	val;
	int	shifted;

	do_presort(stacks);
	while (stacks->b_size != 0)
	{
		shifted = 0;
		val = stacks->b_size - 1;
		idx = get_idx(stacks->b, stacks->b_size, val);
		while (stacks->b[0] != val && stacks->b_size > 1)
		{
			if (shift(stacks))
				shifted++;
			else if (idx > stacks->b_size / 2)
				rrb(stacks);
			else
				rb(stacks);
		}
		shift_back(stacks, shifted, 0);
		pa(stacks);
		shift_back(stacks, shifted, 1);
	}
}
