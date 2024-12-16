/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:35:52 by pjarnac           #+#    #+#             */
/*   Updated: 2024/12/16 13:46:25 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"
#include "stacks.h"
#include "sort.h"
#include <stdlib.h>
#include <limits.h>

int	main(int c, char **args)
{
	t_stacks	*stacks;
	int			*tab;

	if (c < 2)
		exit(EXIT_SUCCESS);
	stacks = create_stacks(args + 1, c - 1);
	tab = create_idx_map(stacks);
	if (!tab)
	{
		free_stacks(stacks);
		exit_error();
	}
	free(stacks->a);
	stacks->a = tab;
	sort(stacks);
	free_stacks(stacks);
}
