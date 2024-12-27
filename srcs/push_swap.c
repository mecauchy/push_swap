/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:45:46 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/12/27 16:32:27 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		i;

	i = 2;
	if (ac < 2)
		return (0);
	stack_a = _lst();
	stack_a->nb = atoi(av[1]);
	stack_b = NULL;
	while (i < ac)
	{
		// check if digit, int overflow, duplicates (parsing)
		ft_lstadd_back(&stack_a, ft_lstnew(atoi(av[i])));
		i++;
	}
	print_lst(stack_a);
	reverse_rotate(&stack_a);
	print_lst(stack_a);
}
