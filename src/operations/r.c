/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:40:43 by pjarnac           #+#    #+#             */
/*   Updated: 2024/12/06 16:19:45 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stacks.h"

void	ra(t_stacks *stacks)
{
	int	i;
	int	temp;

	i = 0;
	while (i < stacks->a_size - 1)
	{
		if (i == 0)
			temp = stacks->a[0];
		stacks->a[i] = stacks->a[i + 1];
		i++;
	}
	if (i != 0)
		stacks->a[i] = temp;
	ft_printf("ra\n");
}

void	rb(t_stacks *stacks)
{
	int	i;
	int	temp;

	i = 0;
	while (i < stacks->b_size - 1)
	{
		if (i == 0)
			temp = stacks->b[0];
		stacks->b[i] = stacks->b[i + 1];
		i++;
	}
	if (i != 0)
		stacks->b[i] = temp;
	ft_printf("rb\n");
}

void	rr(t_stacks *stacks)
{
	int	i;
	int	temp;

	i = 0;
	while (i < stacks->a_size - 1)
	{
		if (i == 0)
			temp = stacks->a[0];
		stacks->a[i] = stacks->a[i + 1];
		i++;
	}
	if (i != 0)
		stacks->a[i] = temp;
	i = 0;
	while (i < stacks->b_size - 1)
	{
		if (i == 0)
			temp = stacks->b[0];
		stacks->b[i] = stacks->b[i + 1];
		i++;
	}
	if (i != 0)
		stacks->b[i] = temp;
	ft_printf("rr\n");
}
