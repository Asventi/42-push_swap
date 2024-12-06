/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:11:36 by pjarnac           #+#    #+#             */
/*   Updated: 2024/12/06 15:35:53 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACKS_H
# define STACKS_H

typedef struct s_stacks
{
	int	*a;
	int	a_size;
	int	*b;
	int	b_size;
	int	size;
}			t_stacks;

void	print_stack(t_stacks *stacks);

#endif
