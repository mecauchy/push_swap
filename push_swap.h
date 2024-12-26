/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 20:01:05 by mecauchy          #+#    #+#             */
/*   Updated: 2024/12/26 18:09:48 by mcauchy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

typedef struct s_stack
{
	int				nb;
	struct s_stack	*next;
	struct s_stack	*prev;
}				t_stack;

void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstnew(int nb);
t_stack	*ft_lstlast(t_stack *lst);
int	ft_lstsize(t_stack *lst);

void	print_lst(t_stack *lst);
void	ft_bzero(void *s, unsigned int n);

t_stack *_lst(void);
void	free_lst(void);

int	swap(t_stack **lst);

#endif