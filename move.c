/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 20:47:39 by mecauchy          #+#    #+#             */
/*   Updated: 2024/12/26 18:23:07 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	swap(t_stack **lst)
{
	t_stack	*head;
	t_stack	*tmp;
	int 	swap;

	if (ft_lstsize(*lst) < 2)
		return (-1);
	head = *lst;
	tmp = head->next;
	swap = head->nb;
	head->nb = tmp->nb;
	tmp->nb = swap;
	return (0);
}

int	sa(t_stack **stack_a)
{
	if (swap(stack_a) == -1)
		return (0);
	else
		ft_putendl_fd("sa", 1);
}

int	sb(t_stack **stack_b)
{
	if (swap(stack_b) == -1)
		return (0);
	else
		ft_putendl_fd("sb", 1);
}

int	ss(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_lstsize(stack_a) < 2 || ft_lstsize(stack_b) < 2)
		return (-1);
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1);
	return (0);
}