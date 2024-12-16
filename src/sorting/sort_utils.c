/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:19:00 by pjarnac           #+#    #+#             */
/*   Updated: 2024/12/16 11:41:01 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"
#include "operations.h"

int	abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

void	presort(t_stacks *stacks, int divider)
{
	int	i;
	int	size;
	int	bsize;
	int	total;

	i = 0;
	size = stacks->a_size;
	bsize = stacks->b_size;
	total = count_idx_under(stacks, bsize / 2 + (size / divider));
	total += count_idx_over(stacks, bsize / 2 + (size - size / divider));
	if (divider == 2)
	{
		total = stacks->a_size;
	}
	while (i < size && stacks->b_size - bsize + (size % 2 == 1) < total)
	{
		if (stacks->a[0] < bsize / 2 + (size / divider))
			pb(stacks);
		else if (stacks->a[0] >= bsize / 2 + (size - size / divider))
		{
			pb(stacks);
			rb(stacks);
		}
		else
		{
			ra(stacks);
			i++;
		}
	}
	i = 0;
	size = stacks->b_size;
	if (divider != 2)
		return ;
	if (stacks->a_size == 1)
		pb(stacks);
	while (i < size / 2)
	{
		rb(stacks);
		i++;
	}
}
