/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:15:55 by pjarnac           #+#    #+#             */
/*   Updated: 2024/12/06 15:43:03 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"
#include "libft.h"

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
