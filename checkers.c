/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:19:30 by fileonar          #+#    #+#             */
/*   Updated: 2025/03/02 12:19:10 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int check_if_in_bounds(char *str)
{
	long nbr;

	nbr = ft_atol(str);
	printf ("nbr value given by ft_atol = %ld\n", nbr);
	if (nbr < INT_MIN || nbr > INT_MAX)
	{
		error_msg("Error. Number out of bounds");
		return (1);
	}
    return (0);
}

int	check_min_2_nbrs(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') && (str[i + 1] == ' '
			|| str[i + 1] == '\0'))
		{
			count++;
		}
		i++;
	}
	if (count < 2)
	{
		error_msg("Error. Not enough numbers");
		return (1);
	}
	return (0);
}

void	check_if_dup(t_stack_node *stacks)
{
	int	i;
	int	j;

	i = 0;
	while (i < stacks->size_a)
	{
		j = i + 1;
		while (j < stacks->size_a)
		{
			if (stacks->stack_a[i] == stacks->stack_a[j])
				error_msg("Duplicate number");
			j++;
		}
		i++;
	}
}

int	check_string(char *stack_a)
{
	int	i;

	i = 0;
	while (stack_a[i])
	{
		while (stack_a[i] && (stack_a[i] == ' ' || (stack_a[i] >= 9
					&& stack_a[i] <= 13)))
			i++;
		if (!stack_a[i])
			break ;
		if (stack_a[i] == '-')
		{
			if (!(stack_a[i + 1] >= '0' && stack_a[i + 1] <= '9'))
				return (error_msg("invalid input"), 1);
			i++;
		}
		if (!(stack_a[i] >= '0' && stack_a[i] <= '9'))
			return (error_msg("invalid input"), 1);
		while (stack_a[i] && (stack_a[i] >= '0' && stack_a[i] <= '9'))
			i++;
		if (stack_a[i] && !(stack_a[i] == ' ' || (stack_a[i] >= 9
					&& stack_a[i] <= 13)))
			return (error_msg("invalid input"), 1);
	}
	return (0);
}

int	check_sorted(t_stack_node *stack)
{
	int	count;

	count = 0;
	while (stack->stack_a[count] == stack->index_stack[count]
		&& count < stack->size_a)
		count++;
	if (count == stack->size_a)
		return (0);
	return (1);
}
