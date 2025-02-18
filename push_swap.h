/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:53:53 by fileonar          #+#    #+#             */
/*   Updated: 2025/02/18 17:48:00 by fileonar         ###   ########.fr       */
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

//CHECKERS
int check_string(char *argv);
void check_if_dup(int *nbrs, int nbr);
#endif