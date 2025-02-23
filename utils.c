/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:27:56 by fileonar          #+#    #+#             */
/*   Updated: 2025/02/21 12:59:40 by fileonar         ###   ########.fr       */
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

void	error_msg(char *s)
{
	if (s == NULL)
		return ;
	write(2, s, ft_strlen(s));
	write(2, "\n", 1);
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