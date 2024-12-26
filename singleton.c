/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   singleton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:18:08 by mecauchy          #+#    #+#             */
/*   Updated: 2024/12/19 21:35:10 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack *_lst(void)
{
	static t_stack stack;
	static int		init = 0;

	if (init == 0)
	{
		init = 1;
		stack.next = NULL;
		stack.prev = NULL;
	}
	return (&stack);
}