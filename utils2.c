/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 09:40:56 by fileonar          #+#    #+#             */
/*   Updated: 2025/03/02 11:17:23 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen_index(char *map[])
{
	int	index;

	index = 0;
	while (map[index] != NULL)
		index++;
	return (index);
}

int	find_min(t_stack_node *stacks)
{
	int	min;
	int	count;

	min = stacks->stack_a[0];
	count = 0;
	while (count < stacks->size_a)
	{
		if (stacks->stack_a[count] < min)
			min = stacks->stack_a[count];
		count++;
	}
	return (min);
}

int	ft_sqrt(int nb)
{
	int	sqr_root;

	if (nb < 0)
		return (0);
	sqr_root = 0;
	while (sqr_root * sqr_root <= nb)
	{
		if (sqr_root * sqr_root <= nb && (sqr_root + 1) * (sqr_root + 1) >= nb)
			return (sqr_root);
		sqr_root++;
	}
	return (0);
}

void	init_default_stacks(t_stack_node *stacks)
{
	stacks->size_a = 0;
	stacks->size_b = 0;
	stacks->size_i = 0;
	stacks->stack_a = NULL;
	stacks->stack_b = NULL;
	stacks->index_stack = NULL;
}