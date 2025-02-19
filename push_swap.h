/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:53:53 by fileonar          #+#    #+#             */
/*   Updated: 2025/02/19 19:26:54 by fileonar         ###   ########.fr       */
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
}	t_stack_node;

//UTILS
int count_elements(char **array);
void	error_msg(char *s);
int	ft_atol(const char *str);

//CHECKERS
int check_string(char *argv);
int check_if_dup(int *nbrs, int nbr);
int	check_min_2_nbrs(char *str);
#endif