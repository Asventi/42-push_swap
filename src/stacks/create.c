/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:57:34 by pjarnac           #+#    #+#             */
/*   Updated: 2024/12/12 11:28:00 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"
#include "libft.h"
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

static long long int	atoierr(char *nptr)
{
	int				sign;
	long long int	res;
	int				i;

	sign = 1;
	res = 0;
	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		sign *= -1 * (nptr[i] - 44);
		i++;
	}
	while ('0' <= nptr[i] && nptr[i] <= '9')
	{
		if ((res * 10 + nptr[i] - '0') / 10 != res)
			return (LLONG_MAX);
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	if ((res > INT_MAX && sign) || (res > -(unsigned int)INT_MIN && sign == -1)
		|| nptr[i] != 0)
		return (LLONG_MAX);
	return (sign * res);
}

static bool	is_duplicate(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] == tab[j])
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

static int	*create_int_tab(char **nums, int size)
{
	int				i;
	long long int	val;
	int				*res;

	i = 0;
	res = malloc(sizeof (int) * size);
	if (!res)
		return (0);
	while (i < size)
	{
		val = atoierr(nums[i]);
		if (val == LLONG_MAX)
		{
			free(res);
			return (0);
		}
		res[i] = (int)val;
		i++;
	}
	return (res);
}

t_stacks	*create_stacks(char **nums, int size)
{
	t_stacks	*stacks;
	int			*a;
	int			*b;

	a = create_int_tab(nums, size);
	b = create_int_tab(nums, size);
	stacks = malloc(sizeof (t_stacks));
	if (!stacks || !a || !b)
	{
		free(a);
		free(b);
		free(stacks);
		exit_error();
	}
	stacks->a = a;
	stacks->b = b;
	stacks->a_size = size;
	stacks->b_size = 0;
	stacks->size = size;
	if (is_duplicate(stacks->a, stacks->size))
	{
		free_stacks(stacks);
		exit_error();
	}
	return (stacks);
}
