/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:19:30 by fileonar          #+#    #+#             */
/*   Updated: 2025/02/19 11:29:38 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_dup(int *nbrs, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (nbrs[i] == nbrs[j])
			{
				ft_printf("Error. Duplicates found.\n");
				exit(1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

// check if the numbers are valid (no duplicates, no chars, no more than int)
int	check_string(char *argv)
{
	int	i;

	i = 0;
	// check if we have only numbers
	//			if we have anything else other than nr, print error;
	while (argv[i])
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			i++;
		else if ((argv[i] == '-' || argv[i] == '+') && argv[i + 1])
		{
			if (i != 0 && argv[i - 1] != ' ')
			{
				ft_printf("Error. put space between numbers\n");
				return (1);
			}
			i++;
		}
		else if (argv[i] == ' ')
			i++;
		else
		{
			ft_printf("Error. wrong input of numbers\n");
			return (1);
		}
	}
	// check if the numbers that we have are duplicates;
	// check if the number is bigger than an integer;
	// libft ft_isnumber
	//! ft_isalpha
	return (0);
}
