/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:27:56 by fileonar          #+#    #+#             */
/*   Updated: 2025/03/02 11:11:30 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int count_elements(char **array)
{
    int count = 0;
    while (array[count] != NULL)
    {
        count++;
    }
    return count;
}

int ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;

	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	ft_printf("%d\n", (str1[i] - str2[i]));
	return (str1[i] - str2[i]);
}

void	error_msg(char *message, t_stack_node *stacks)
{
	if (stacks)
	{
		if (stacks->stack_a)
			ft_free_n_null((void **)stacks->stack_a);
		if (stacks->stack_b)
			ft_free_n_null((void **)stacks->stack_b);
		if (stacks->index_stack)
			ft_free_n_null((void **)stacks->index_stack);
	}
	ft_printf("Error\n%s\n", message);
	exit(EXIT_FAILURE);
}

static int	ft_whitespaces(const char *c)
{
	int	i;

	i = 0;
	while (c[i] == 32 || c[i] == '\t' || c[i] == '\n'
		|| c[i] == '\v' || c[i] == '\f' || c[i] == '\r')
		i++;
	return (i);
}
long	ft_atol(const char *str)
{
	int	i;
	long	nr;
	int	sign;

	nr = 0;
	sign = 1;
	i = ft_whitespaces(str);
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nr = nr * 10 + (str[i] - '0');
		i++;
	}
	return (nr * sign);
}