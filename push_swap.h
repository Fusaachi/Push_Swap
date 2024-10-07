/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:36:37 by pgiroux           #+#    #+#             */
/*   Updated: 2024/10/04 12:55:34 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack
{
	int		*buf;
	char	name;
	int		target;
	int		median;
	int		cap;
	int		size;
	int		max;
	int		min;
	int		i;
	int		index;
	int		reverse;
}t_stack;

typedef struct s_hit
{
	int	index_dest;
	int	index_src;
	int	reverse_dest;
	int	reverse_src;
	int	score;
}t_hit;

int		main(int argc, char **argv);
void	ft_verif_arg(int argc, char **argv);
int		ft_isnum(char *num);
int		ft_doublon(int temp, char **stack, int i);

void	ft_error(char *mess);
void	ft_error_arg(char *mess, int argc, char **stack);

void	ft_init(t_stack *a, t_stack *b, int argc, char **argv);
void	ft_init_stack(t_stack *stack, char **argv, int cap, char name);
void	update_stack(t_stack *stack);
void	ft_update(t_stack *a, t_stack *b);

int		ft_is_string( char *string);
int		ft_is_sort(t_stack *stack);

void	ft_swap(t_stack *stack, int ss);
void	ft_swap_a_b(t_stack *a, t_stack *b);

void	ft_push(t_stack *src, t_stack *dest);
void	ft_down(t_stack *stk);
void	ft_up(t_stack *stk);

void	ft_rotate(t_stack *stack, int rr);
void	ft_rotate_a_b(t_stack *a, t_stack *b);

void	ft_reverse_rotate(t_stack *stack, int rrr);
void	ft_reverse_rotate_a_b(t_stack *a, t_stack *b);
int		r_all(t_stack *a, t_stack *b, t_hit hit);

void	push_swap(t_stack *a, t_stack *b);

void	ft_three_sort(t_stack *a);
int		max_value(int *stack, int size);
int		min_value(int *stack, int size);

int		target_reverse(t_stack *a, t_stack *b, int num);
int		target(t_stack *b, t_stack *a, int num);

t_hit	ft_cost(t_stack *a, t_stack *b, int num);
t_hit	best_hit(t_stack *a, t_stack *b, int mouv);

void	move(t_stack *a, t_stack *b, int mouv);
void	ft_remove(t_stack *a);

void	ft_finish(t_stack *a, t_stack *b);

void	ft_print(t_stack *a, t_stack *b);

#endif