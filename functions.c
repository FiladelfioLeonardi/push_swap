/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:41:27 by fileonar          #+#    #+#             */
/*   Updated: 2025/03/02 09:32:57 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// sa (swap a): Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.
// sb (swap b): Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.
// ss : sa and sb at the same time.
// pa (push a): Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.
// pb (push b): Take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty.
// ra (rotate a): Shift up all elements of stack a by 1.
// The first element becomes the last one.
// rb (rotate b): Shift up all elements of stack b by 1.
// The first element becomes the last one.
// rr : ra and rb at the same time.
// rra (reverse rotate a): Shift down all elements of stack a by 1.
// The last element becomes the first one.
// rrb (reverse rotate b): Shift down all elements of stack b by 1.
// The last element becomes the first one.
// rrr : rra and rrb at the same time

// #include "push_swap.h"
// #include <stdio.h>

// void pa(t_stack_node *stacks)
// {
// 	int i;
// 	int j;
// 	int tmp;

// 	i = 0;
// 	j = 0;
// 	printf("stack_a[0] = %d\n", stacks->stack_a[0]);
// 	printf("stack_b[0] = %d\n", stacks->stack_b[0]);
// 	while (stacks->stack_a[i])
// 		i++;
// 	while (stacks->stack_b[j])
// 		j++;
// 	if (j > 0)
// 	{
// 		tmp = stacks->stack_b[j - 1];
// 		stacks->stack_a[i] = tmp;
// 		stacks->stack_b[j - 1] = 0;
// 		printf("stack_a[0] = %d\n", stacks->stack_a[0]);
// 		printf("stack_b[0] = %d\n", stacks->stack_b[0]);
// 		printf("pa\n");
// 	}
	
// }

// void sa(t_stack_node *stacks)
// {
// 	int tmp;

	
// 	if (stacks->stack_a[0] && stacks->stack_a[1])
// 	{	
// 		printf("stack_a[0] = %d\n", stacks->stack_a[0]);
// 		printf("stack_a[1] = %d\n", stacks->stack_a[1]);
// 		tmp = stacks->stack_a[0];
// 		stacks->stack_a[0] = stacks->stack_a[1];
// 		stacks->stack_a[1] = tmp;
// 		printf("stack_a[0] = %d\n", stacks->stack_a[0]);
// 		printf("stack_a[1] = %d\n", stacks->stack_a[1]);
// 		printf("sa\n");
// 	}
// }

// void sb(t_stack_node *stacks)
// {
// 	int tmp;

// 	if (stacks->stack_b[0] && stacks->stack_b[1])
// 	{
// 		printf("stack_b[0] = %d\n", stacks->stack_b[0]);
// 		printf("stack_b[1] = %d\n", stacks->stack_b[1]);
// 		tmp = stacks->stack_b[0];
// 		stacks->stack_b[0] = stacks->stack_b[1];
// 		stacks->stack_b[1] = tmp;
// 		printf("stack_b[0] = %d\n", stacks->stack_b[0]);
// 		printf("stack_b[1] = %d\n", stacks->stack_b[1]);
// 		printf("sb\n");
// 	}
// }

// void ss(t_stack_node *stacks)
// {
// 	sa(stacks);
// 	sb(stacks);
// 	printf("ss\n");
// }

// int main ()
// {
// 	t_stack_node *stacks;
// 	int i;
// 	int j;
	
// 	stacks = malloc(sizeof(t_stack_node));
// 	if (stacks == NULL)
// 		return (0);
// 	stacks->stack_b = malloc(sizeof(int) * 5);
// 	if (stacks->stack_b == NULL)
// 		return (0);
// 	stacks->stack_a = malloc(sizeof(int) * 5);
// 	if (stacks->stack_a == NULL)
// 		return (0);
// 	i = 0;
// 	j = 0;
// 	while (i < 5)
// 	{
// 		stacks->stack_b[i] = i + 1;
// 		stacks->stack_a[j] = j + 1;
// 		printf("stack_b[%d] = %d\n", i, stacks->stack_b[i]);
// 		printf("stack_A[%d] = %d\n", j, stacks->stack_a[j]);
// 		i++;
// 		j++;
// 	}
// 	pa(stacks);
// 	// sb(stacks);
// 	// sa(stacks);
// 	// ss(stacks);
	
// 	free(stacks->stack_b);
// 	free(stacks->stack_a);
// 	free(stacks);
// 	return (0);	
// }