/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:53:53 by fileonar          #+#    #+#             */
/*   Updated: 2025/03/02 12:18:22 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <limits.h>
# include <stdbool.h>

typedef struct s_stack_node
{
	int	*stack_a;
	int	*stack_b;
	int	*index_stack;
	int	size_a;
	int	size_b;
	int	size_i;
}	t_stack_node;

//UTILS
int count_elements(char **array);
void	error_msg(char *message);
void	error_msg_n_free(char *message, t_stack_node *stacks);
long	ft_atol(const char *str);
int ft_strcmp(char *str1, char *str2);
int	find_min(t_stack_node *stacks);
int	ft_sqrt(int nb);
int	ft_strlen_index(char *map[]);

//CHECKERS
int	check_string(char *stack_a);
void	check_if_dup(t_stack_node *stacks);
int	check_min_2_nbrs(char *str);
int check_if_in_bounds(char *str);
int	check_sorted(t_stack_node *stack);

//MALLOC
char	**create_stack_a_split(char *stack_a);
int		*create_stack(char **stack_a_split);
char	*create_argument_str(char *argv[]);
void	create_stacks(char *arg_str, t_stack_node *stacks);
void	prepair_stacks(char *arg_str, t_stack_node *stacks);

//FUNCTIONS
void	sa(t_stack_node *stacks);
void	sb(t_stack_node *stacks);
void	pa(t_stack_node *stacks);
void	pb(t_stack_node *stacks);
void	ra(t_stack_node *stacks);
void	rb(t_stack_node *stacks);
void	rr(t_stack_node *stacks);
void	rra(t_stack_node *stacks);
void	rrb(t_stack_node *stacks);
void	rrr(t_stack_node *stacks);
int		*bubble_sort_stack(int *stack_a_int, int stack_a_length);

//SORTING SMALL STACKS
void	sort_two(t_stack_node *stacks);
void	sort_three(t_stack_node *stacks);
void	sort_four(t_stack_node *stacks);
void	sort_five(t_stack_node *stacks);

//ALGORYTHM
void	k_sort(t_stack_node *stacks);
int	get_moves(t_stack_node *stacks);

void	init_default_stacks(t_stack_node *stacks);
#endif