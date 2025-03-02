/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 09:58:01 by fileonar          #+#    #+#             */
/*   Updated: 2025/03/02 11:09:22 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**create_stack_a_split(char *stack_a)
{
	char	**stack_a_split;

	stack_a_split = ft_split(stack_a, ' ');
	if (!stack_a_split)
		error_msg("stack_a no no split");
	return (stack_a_split);
}

int	*create_stack(char **stack_a_split)
{
	int		*stack_a_int;
	int		stack_a_lenght;
	int		count;
	long	num;

	count = 0;
	stack_a_lenght = ft_strlen_index(stack_a_split);
	stack_a_int = ft_calloc(stack_a_lenght, sizeof(int));
	if (!stack_a_int)
		error_msg("stack_a_int no no malloc");
	while (count < stack_a_lenght)
	{
		num = ft_atol(stack_a_split[count]);
		if (num > INT_MAX || num < INT_MIN)
		{
			ft_free_n_null((void **)stack_a_split);
			ft_free_n_null((void **)stack_a_int);
			error_msg("Number out of int range");
		}
		stack_a_int[count] = (int)num;
		count++;
	}
	return (stack_a_int);
}

char	*create_argument_str(char *argv[])
{
	int		count;
	char	*temp;
	char	*arg_str;

	count = 1;
	temp = ft_strdup("");
	if (!temp)
		error_msg("temp string failed");
	while (argv[count] != NULL)
	{
		arg_str = ft_strjoin(temp, " ");
		free(temp);
		temp = ft_strjoin(arg_str, argv[count]);
		free(arg_str);
		arg_str = temp;
		count++;
	}
	temp = NULL;
	return (arg_str);
}

void	create_stacks(char *arg_str, t_stack_node *stacks)
{
	char	**stack_a_split;

	check_string(arg_str);
	stack_a_split = create_stack_a_split(arg_str);
	if (!stack_a_split)
		error_msg("stack_a_split no no malloc");
	free(arg_str);
	stacks->stack_a = create_stack(stack_a_split);
	if (!stacks->stack_a)
		error_msg("stack_a no no malloc");
	stacks->size_a = ft_strlen_index(stack_a_split);
	stacks->index_stack = create_stack(stack_a_split);
	if (!stacks->index_stack)
		error_msg("index_stack no no malloc");
	ft_free_n_null((void **)stack_a_split);
	check_if_dup(stacks);
}

void	prepair_stacks(char *arg_str, t_stack_node *stacks)
{
	create_stacks(arg_str, stacks);
	stacks->stack_b = ft_calloc(stacks->size_a, sizeof(int));
	if (!stacks->stack_b)
		error_msg("Memory allocation failed for stack_b");
	stacks->size_b = 0;
	stacks->index_stack = bubble_sort_stack(stacks->index_stack,
			stacks->size_a);
	stacks->size_i = stacks->size_a;
}