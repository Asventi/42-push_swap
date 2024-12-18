/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:19:00 by pjarnac           #+#    #+#             */
/*   Updated: 2024/12/18 14:43:02 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"
#include "operations.h"

static void	recenter(t_stacks *stacks, int size)
{
	int	i;

	if (size == stacks->b_size)
		return ;
	i = 0;
	while (i < size)
	{
		rb(stacks);
		i++;
	}
}

bool	is_sort(int	*tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] != tab[i + 1] - 1)
			return (false);
		i++;
	}
	return (true);
}

void	presort(t_stacks *stacks, int divider)
{
	int	min;
	int	max;
	int	size;

	min = stacks->size / divider;
	max = stacks->size - stacks->size / divider - 3;
	size = 0;
	while (stacks->a_size > 3 && !is_sort(stacks->a, stacks->a_size))
	{
		if (stacks->a[0] < min && stacks->a[0] < stacks->size - 3)
		{
			pb(stacks);
			min++;
			size++;
		}
		else if (stacks->a[0] >= max && stacks->a[0] < stacks->size - 3)
		{
			pb(stacks);
			rb(stacks);
			max--;
		}
		else
			ra(stacks);
	}
	recenter(stacks, size);
}
