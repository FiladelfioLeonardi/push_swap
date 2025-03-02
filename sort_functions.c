/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:06:55 by fileonar          #+#    #+#             */
/*   Updated: 2025/03/02 11:16:42 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*bubble_sort_stack(int *stack_a_int, int stack_a_length)
{
	int	count;
	int	temp;
	int	passes;

	passes = stack_a_length - 1;
	while (passes > 0)
	{
		count = 0;
		while (count < passes)
		{
			if (stack_a_int[count] > stack_a_int[count + 1])
			{
				temp = stack_a_int[count];
				stack_a_int[count] = stack_a_int[count + 1];
				stack_a_int[count + 1] = temp;
			}
			count++;
		}
		passes--;
	}
	return (stack_a_int);
}

void	sort_two(t_stack_node *stacks)
{
	if (stacks->stack_a[0] > stacks->stack_a[1])
		sa(stacks);
}

void	sort_three(t_stack_node *stacks)
{
	int	a;
	int	b;
	int	c;

	a = stacks->stack_a[0];
	b = stacks->stack_a[1];
	c = stacks->stack_a[2];
	if (a > b && a < c)
		sa(stacks);
	else if (a > c && b > c)
	{
		sa(stacks);
		rra(stacks);
	}
	else if (a > b && b < c && a > c)
		ra(stacks);
	else if (a < b && a > c)
		rra(stacks);
	else if (a < b && b > c && a < c)
	{
		sa(stacks);
		ra(stacks);
	}
}

void	sort_four(t_stack_node *stacks)
{
	int	min;
	int	count;

	min = find_min(stacks);
	count = 0;
	while (stacks->stack_a[0] != min)
	{
		ra(stacks);
		count++;
	}
	pb(stacks);
	sort_three(stacks);
	pa(stacks);
}

void	sort_five(t_stack_node *stacks)
{
	int	min;
	int	count;

	min = find_min(stacks);
	count = 0;
	while (stacks->stack_a[0] != min)
	{
		ra(stacks);
		count++;
	}
	pb(stacks);
	sort_four(stacks);
	pa(stacks);
}