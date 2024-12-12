/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:05:42 by pjarnac           #+#    #+#             */
/*   Updated: 2024/12/12 15:20:34 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"
#include "operations.h"
#include "sort.h"
#include <stdlib.h>
#include <stdbool.h>

void	presort(t_stacks *stacks, int divider)
{
	int	i;
	int	*tab;
	int	c;
	int	size;
	int	total;

	i = 0;
	c = 0;
	size = stacks->a_size;
	total = count_idx_under(stacks, size / divider);
	total += count_idx_over(stacks, size - size / divider);
	while (i < size && c < total)
	{
		if (stacks->a[0] < size / divider)
		{
			pb(stacks);
			c++;
		}
		else if (stacks->a[0] >= size - size / divider)
		{
			pb(stacks);
			rb(stacks);
			c++;
		}
		else
		{
			ra(stacks);
			i++;
		}
	}
}

void	sort(t_stacks *stacks)
{
	int	total;
	presort(stacks, 4);
	presort(stacks, 2);
}
