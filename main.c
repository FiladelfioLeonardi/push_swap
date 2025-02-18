/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:44:14 by fileonar          #+#    #+#             */
/*   Updated: 2025/02/18 18:16:01 by fileonar         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	t_stack_node	*stacks;
	char			**split_nbr;
	int				i;
	int				count;

	// t_stack_node	*stacks;
	stacks = malloc(sizeof(t_stack_node));
	if (stacks == NULL)
		return (0);
	i = 1;
	if (argc < 2)
		ft_printf("Invalid ammount of arguments\n");
	else if (argc == 2)
	{
		i = 0;
		if (check_string(argv[1]) != 0)
			return (1);
		// split the numbers by space
		split_nbr = ft_split(argv[1], ' ');
		count = count_elements(split_nbr);
		// malloc the numbers to stack a
		stacks->stack_a = malloc(sizeof(int) * count);
		if (stacks->stack_a == NULL)
			return (0);
		// atoi the numbers
		while (split_nbr[i] != NULL)
		{
			stacks->stack_a[i] = ft_atoi(split_nbr[i]);
			ft_printf("stack_a[%d] = %d\n", i, stacks->stack_a[i]);
			i++;
		}
		check_if_dup(stacks->stack_a, count);
	}
	// check if the numbers are valid (no duplicates, no chars,
		//no more than int)
	// else
	// {
	// 	while (i != argc)
	// 	{
	// 		check_string(argv[i]);
	// 		i++;
	// 	}
	// }
	// malloc all the nr to the stack a
	// push everything in stack b
	//	while pushing sort
	return (0);
}
