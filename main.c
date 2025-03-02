/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:44:14 by fileonar          #+#    #+#             */
/*   Updated: 2025/03/02 10:05:03 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	char			*arg_str;
	t_stack_node	stacks;

	init_default_stacks(&stacks);
	if (argc == 2)
	{
		arg_str = ft_strdup(argv[1]);
		if (!arg_str)
		{
			error_msg("arg_str no no strdup");
			return (1);
		}
		prepair_stacks(arg_str, &stacks);
		k_sort(&stacks);
		ft_free_n_null((void **)&stacks);
	}
	else if (argc > 2)
	{
		arg_str = create_argument_str(argv);
		prepair_stacks(arg_str, &stacks);
		k_sort(&stacks);
		ft_free_n_null((void **)&stacks);
	}
	return (0);
}