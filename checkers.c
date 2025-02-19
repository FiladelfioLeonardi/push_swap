/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:19:30 by fileonar          #+#    #+#             */
/*   Updated: 2025/02/19 19:12:45 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
				error_msg("Error. Duplicates found.");
				return(1);
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
		//if it s a number then ++;
		if (ft_isdigit(argv[i]) || argv[i] == ' ')
			i++;
		//if we have a - or a + then we have to check if we have a next char
		else if ((argv[i] == '-' || argv[i] == '+') && argv[i + 1])
		{
			if (i != 0 && argv[i - 1] != ' ')
			{
				error_msg("Error. wrong input for the numbers");
				return (1);
			}
			i++;
		}
		//if we have something else then return error
		else
		{
			error_msg("Error. wrong input");
			return (1);
		}
	}
	// check if the numbers that we have are duplicates;
	// check if the number is bigger than an integer;
	// libft ft_isnumber
	//! ft_isalpha
	return (0);
}
