/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:27:56 by fileonar          #+#    #+#             */
/*   Updated: 2025/02/19 16:56:30 by fileonar         ###   ########.fr       */
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

void	error_msg(char *s)
{
	if (s == NULL)
		return ;
	write(2, s, ft_strlen(s));
	write(2, "\n", 1);
}