/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:35:52 by pjarnac           #+#    #+#             */
/*   Updated: 2024/12/06 16:23:04 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"
#include "stacks.h"
#include <stdlib.h>

int	main(int c, char **args)
{
	int			a[5] = {1, 2, 5, 7, 8};
	int			b[5] = {2, 9, 4, 0, 0};
	t_stacks	*stacks;

	stacks = malloc(sizeof (t_stacks));
	stacks->a = a;
	stacks->b = b;
	stacks->a_size = 5;
	stacks->b_size = 4;
	rr(stacks);
	sa(stacks);
	print_stack(stacks);
}
