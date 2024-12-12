/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:24:25 by pjarnac           #+#    #+#             */
/*   Updated: 2024/12/09 13:41:14 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"
#include "libft.h"

void	rra(t_stacks *stacks)
{
	int	i;
	int	temp;

	if (stacks->a_size > 1)
	{
		i = stacks->a_size - 1;
		temp = stacks->a[i];
		while (--i >= 0)
			stacks->a[i + 1] = stacks->a[i];
		stacks->a[0] = temp;
	}
	ft_printf("rra\n");
}

void	rrb(t_stacks *stacks)
{
	int	i;
	int	temp;

	if (stacks->b_size > 1)
	{
		i = stacks->b_size - 1;
		temp = stacks->b[i];
		while (--i >= 0)
			stacks->b[i + 1] = stacks->b[i];
		stacks->b[0] = temp;
	}
	ft_printf("rrb\n");
}

void	rrr(t_stacks *stacks)
{
	int	i;
	int	temp;

	if (stacks->a_size > 1)
	{
		i = stacks->a_size - 1;
		temp = stacks->a[i];
		while (--i >= 0)
			stacks->a[i + 1] = stacks->a[i];
		stacks->a[0] = temp;
	}
	if (stacks->b_size > 1)
	{
		i = stacks->b_size - 1;
		temp = stacks->b[i];
		while (--i >= 0)
			stacks->b[i + 1] = stacks->b[i];
		stacks->b[0] = temp;
	}
	ft_printf("rrr\n");
}
