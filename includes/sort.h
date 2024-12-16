/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:49:51 by pjarnac           #+#    #+#             */
/*   Updated: 2024/12/16 10:25:36 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

# include "stacks.h"
# include <stdbool.h>

void	sort(t_stacks *stacks);

int		*create_idx_map(t_stacks *stacks);
int		get_idx(int	*tab, int size, int n);
int		count_idx_under(t_stacks *stacks, int n);
int		count_idx_over(t_stacks *stacks, int n);
int		abs(int n);
void	presort(t_stacks *stacks, int divider);

#endif
