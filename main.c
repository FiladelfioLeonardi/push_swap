/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:44:14 by fileonar          #+#    #+#             */
/*   Updated: 2025/02/23 06:30:37 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// You have to write a program named push_swap that
// 			takes as an argument the stack a formatted as a list of integers.
// The first argument should be at the top of the
// 			stack (be careful about the order).
// • The program must display the smallest
//			list of instructions possible to sort the stack
// 			a, the smallest number being at the top.
// • Instructions must be separated by a ’\n’ and nothing else.
// • The goal is to sort the stack with the lowest
//			possible number of operations. During
// 			the evaluation process, the number of instructions
//			found by your program will be
// 			compared against a limit: the maximum number of operations tolerated
// If your program either displays a longer
//			list or if the numbers aren’t sorted properly, your
// 			grade will be 0.
// • If no parameters are specified,
//			the program must not display anything and give the
// 			prompt back.
// • In case of error, it must display "Error" followed
//			by a ’\n’ on the standard error.
// Errors include for example:
//			some arguments aren’t integers, some arguments are
// bigger than an integer and/or there are duplicates.

// The rules
// • You have 2 stacks named a and b.
// • At the beginning:
// ◦ The stack a contains a random amount of negative and/or positive numbers
// which cannot be duplicated.
// ◦ The stack b is empty.
// • The goal is to sort in ascending order numbers into stack a.

static int one_string(char *str)
{
	t_stack_node	*stacks;
	char			**split_nbr;
	int				i;
	int				count;

	i = 0;
	if (check_string(str) != 0)
		return (1);
	// split the numbers by space
	split_nbr = ft_split(str, ' ');
	//check if the numbers we send (strings) are in bounds
	while (split_nbr[i] != NULL)
	{
		//check if the number is as long as a bounbds number
			if (check_if_in_bounds(split_nbr[i]) == 1)
				return (1);
		i++;
	}
	i = 0;
	// count the elements
	count = count_elements(split_nbr);
	//malloc the stack
	stacks = malloc(sizeof(t_stack_node));
	if (stacks == NULL)
	return (0);
	// malloc the stack a
	stacks->stack_a = malloc(sizeof(long) * count);
	if (stacks->stack_a == NULL || stacks->stack_a == 0)
	{
		error_msg("Error. Malloc failed");
		return (1);
	}
	
	// atol the numbers
	while (split_nbr[i] != NULL)
	{
		stacks->stack_a[i] = ft_atol(split_nbr[i]);
		ft_printf("stack_a[%d] = %d\n", i, stacks->stack_a[i]);
		i++;
	}
	if (check_if_dup(stacks->stack_a, count) == 1)
	{
		ft_free_n_null((void **)&stacks->stack_a);
		ft_free_n_null((void **)&stacks);
		ft_free_n_null((void **)&split_nbr);
		error_msg("freed stacks, stacks->a and split_nbr");
		return (1);
	}
	return (0);
}

// static int more_than_one_string(int argc, char **argv)
// {
// 	t_stack_node	*stacks;
// 	int				i;

// 	i = 1;
// 	// malloc the numbers to stack a
// 	stacks = malloc(sizeof(t_stack_node));
// 	if (stacks == NULL)
// 		return (0);
// 	stacks->stack_a = malloc(sizeof(int) * (argc - 1));
// 	if (stacks->stack_a == NULL)
// 		return (0);
// 	while (i < argc)
// 	{
// 		if (check_string(argv[i]) != 0)
// 			return (1);
// 		if ((stacks->stack_a[i - 1] = ft_atol(argv[i])) < INT_MIN
// 			|| stacks->stack_a[i - 1] > INT_MAX)
// 		{
// 			ft_free_n_null((void **)&stacks->stack_a);
// 			ft_free_n_null((void **)&stacks);
// 			ft_printf("freed stacks and stacks->a\n");
// 			return (1);
// 		}
// 		ft_printf("stack_a[%d] = %d\n", i - 1, stacks->stack_a[i - 1]);
// 		i++;
// 	}
// 	if (check_if_dup(stacks->stack_a, i) == 1)
// 	{
// 		ft_free_n_null((void **)&stacks->stack_a);
// 		ft_free_n_null((void **)&stacks);
// 		ft_printf("freed stacks and stacks->a\n");
// 		return (1);
// 	}
// 	return (0);
// }

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		error_msg("Invalid ammount of arguments");
		return (1);
	}
	//at this point i know hat i have at least 2 argc
	else if (argc == 2)
	{
		//i can either have a srting or just one rgument
		//if i have only one argument error msg and return
		if (check_min_2_nbrs(argv[1]) == 1)
			return (1);
		//here we already have a string with more than one argument
		if (one_string(argv[1]) == 1)
			return(1);
	}
	// else
	// {
	// 	if (more_than_one_string(argc, argv) == 1)
	// 		return (1);
	// }
	// push everything in stack b
	//	while pushing sort
	return (0);
}

// ./push_swap 1 2 3 4 5
// ./push_swap "1 2 3 4 5"
// ./push_swap "1    "
// ./push_swap 1      
// ./push_swap "       1"
// ./push_swap 1 2 3 4 5 a
// ./push_swap "1 2 3 4 5 a"
// ./push_swap "1-2 3 4 5"
// ./push_swap 1-2 3 4 5
// ./push_swap 