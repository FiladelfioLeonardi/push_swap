/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 09:16:41 by fileonar          #+#    #+#             */
/*   Updated: 2025/03/02 11:16:48 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_no_print(t_stack_node *stacks)
{
	int	temp;

	if (stacks->size_a > 1)
	{
		temp = stacks->stack_a[0];
		stacks->stack_a[0] = stacks->stack_a[1];
		stacks->stack_a[1] = temp;
	}
}

void	sb_no_print(t_stack_node *stacks)
{
	int	temp;

	if (stacks->size_b > 1)
	{
		temp = stacks->stack_b[0];
		stacks->stack_b[0] = stacks->stack_b[1];
		stacks->stack_b[1] = temp;
	}
}

void	sa(t_stack_node *stacks)
{
	if (stacks->size_a > 1)
	{
		sa_no_print(stacks);
		write(1, "sa\n", 3);
	}
}

void	sb(t_stack_node *stacks)
{
	if (stacks->size_b > 1)
	{
		sb_no_print(stacks);
		write(1, "sb\n", 3);
	}
}

void	ss(t_stack_node *stacks)
{
	if (stacks->size_a > 1 && stacks->size_b > 1)
	{
		sa_no_print(stacks);
		sb_no_print(stacks);
		write(1, "ss\n", 3);
	}
}