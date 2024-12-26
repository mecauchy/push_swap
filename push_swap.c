/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 20:13:33 by mecauchy          #+#    #+#             */
/*   Updated: 2024/12/19 21:43:37 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack *stack_b;
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
	swap(&stack_a);
	print_lst(stack_a);
}