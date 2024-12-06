/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:35:42 by pjarnac           #+#    #+#             */
/*   Updated: 2024/12/06 14:40:29 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stacks.h"

void	sa(t_stacks *stacks)
{
	int	temp;

	if (stacks->a_size > 1)
	{
		temp = stacks->a[0];
		stacks->a[0] = stacks->a[1];
		stacks->a[1] = temp;
	}
	ft_printf("sa\n");
}

void	sb(t_stacks *stacks)
{
	int	temp;

	if (stacks->b_size > 1)
	{
		temp = stacks->b[0];
		stacks->b[0] = stacks->b[1];
		stacks->b[1] = temp;
	}
	ft_printf("sb\n");
}

void	ss(t_stacks *stacks)
{
	int	temp;

	if (stacks->a_size > 1)
	{
		temp = stacks->a[0];
		stacks->a[0] = stacks->a[1];
		stacks->a[1] = temp;
	}
	if (stacks->b_size > 1)
	{
		temp = stacks->b[0];
		stacks->b[0] = stacks->b[1];
		stacks->b[1] = temp;
	}
	ft_printf("ss\n");
}
