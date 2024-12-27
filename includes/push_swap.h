/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:45:56 by mcauchy-          #+#    #+#             */
/*   Updated: 2024/12/27 14:03:29 by mcauchy-         ###   ########.fr       */
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
int		ft_lstsize(t_stack *lst);

void	print_lst(t_stack *lst);
void	ft_bzero(void *s, unsigned int n);

t_stack	*_lst(void);
void	free_lst(void);

int		swap(t_stack **lst);
int		sa(t_stack **stack_a);
int		sb(t_stack **stack_b);
int		ss(t_stack **stack_a, t_stack **stack_b);
int		rotate(t_stack **lst);
int		ra(t_stack **stack_a);
int		rb(t_stack **stack_b);
int		rr(t_stack **stack_a, t_stack **stack_b);
int		rra(t_stack **stack_a);
int		rrb(t_stack **stack_b);
void	ft_putendl_fd(char *s, int fd);
int		reverse_rotate(t_stack **lst);
t_stack	*lst_before_last(t_stack *lst);

#endif