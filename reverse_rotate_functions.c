/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_functions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:15:48 by fileonar          #+#    #+#             */
/*   Updated: 2025/03/02 11:17:38 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra_no_print(t_stack_node *stacks)
{
	int	temp;
	int	count;

	if (stacks->size_a > 1)
	{
		temp = stacks->stack_a[stacks->size_a - 1];
		count = stacks->size_a - 1;
		while (count > 0)
		{
			stacks->stack_a[count] = stacks->stack_a[count - 1];
			count--;
		}
		stacks->stack_a[0] = temp;
	}
}

void	rrb_no_print(t_stack_node *stacks)
{
	int	temp;
	int	count;

	if (stacks->size_b > 1)
	{
		temp = stacks->stack_b[stacks->size_b - 1];
		count = stacks->size_b - 1;
		while (count > 0)
		{
			stacks->stack_b[count] = stacks->stack_b[count - 1];
			count--;
		}
		stacks->stack_b[0] = temp;
	}
}

void	rra(t_stack_node *stacks)
{
	if (stacks->size_a > 1)
	{
		rra_no_print(stacks);
		write(1, "rra\n", 4);
	}
}

void	rrb(t_stack_node *stacks)
{
	if (stacks->size_b > 1)
	{
		rrb_no_print(stacks);
		write(1, "rrb\n", 4);
	}
}

void	rrr(t_stack_node *stacks)
{
	if (stacks->size_a > 1 && stacks->size_b > 1)
	{
		rra_no_print(stacks);
		rrb_no_print(stacks);
		write(1, "rrr\n", 4);
	}
}
