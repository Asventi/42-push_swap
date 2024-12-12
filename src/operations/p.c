/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:17:04 by pjarnac           #+#    #+#             */
/*   Updated: 2024/12/10 16:35:28 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stacks.h"

static void	increment(int *tab, int size)
{
	ft_memmove(tab + 1, tab, size * sizeof (int));
}

static void	decrement(int *tab, int size)
{
	ft_memmove(tab, tab + 1, size * sizeof (int));
}

void	pa(t_stacks *stacks)
{
	if (stacks->b_size > 0)
	{
		stacks->a_size++;
		increment(stacks->a, stacks->size - 1);
		stacks->a[0] = stacks->b[0];
		decrement(stacks->b, stacks->size - 1);
		stacks->b_size--;
	}
	ft_printf("pa\n");
}

void	pb(t_stacks *stacks)
{
	if (stacks->a_size > 0)
	{
		stacks->b_size++;
		increment(stacks->b, stacks->size - 1);
		stacks->b[0] = stacks->a[0];
		decrement(stacks->a, stacks->size - 1);
		stacks->a_size--;
	}
	ft_printf("pb\n");
}
