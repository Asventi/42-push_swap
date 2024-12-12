/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexes.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:11:23 by pjarnac           #+#    #+#             */
/*   Updated: 2024/12/12 15:16:35 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"
#include <stdlib.h>

int	*create_idx_map(t_stacks *stacks)
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc(sizeof (int) * stacks->size);
	if (!tab)
		return (0);
	i = 0;
	while (i < stacks->size)
	{
		tab[i] = 0;
		j = 0;
		while (j < stacks->size)
		{
			if (stacks->a[i] > stacks->a[j])
				tab[i]++;
			j++;
		}
		i++;
	}
	return (tab);
}

int	count_idx_under(t_stacks *stacks, int n)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (i < stacks->a_size)
	{
		if (stacks->a[i] < n)
			c++;
		i++;
	}
	return (c);
}

int	count_idx_over(t_stacks *stacks, int n)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (i < stacks->a_size)
	{
		if (stacks->a[i] >= n)
			c++;
		i++;
	}
	return (c);
}

int	get_idx(int	*tab, int size, int n)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i] == n)
			return (i);
		i++;
	}
	return (-1);
}
