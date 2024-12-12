/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:15:55 by pjarnac           #+#    #+#             */
/*   Updated: 2024/12/11 17:29:36 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"
#include "operations.h"
#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

void	print_stack(t_stacks *stacks)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < stacks->a_size || j < stacks->b_size)
	{
		if (i < stacks->a_size)
		{
			ft_printf("%d", stacks->a[i]);
			i++;
		}
		ft_printf("\t");
		if (j < stacks->b_size)
		{
			ft_printf("%d\t", stacks->b[j]);
			j++;
		}
		ft_printf("\n");
	}
}

void	pa_num(t_stacks *stacks, int num)
{
	int	i;

	i = 0;
	while (i < num)
	{
		pa(stacks);
		i++;
	}
}

void	pb_num(t_stacks *stacks, int num)
{
	int	i;

	i = 0;
	while (i < num)
	{
		pb(stacks);
		i++;
	}
}

void	free_stacks(t_stacks *stacks)
{
	free(stacks->a);
	free(stacks->b);
	free(stacks);
}

void	exit_error(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}
