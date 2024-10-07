/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:13:17 by pgiroux           #+#    #+#             */
/*   Updated: 2024/09/30 10:03:13 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_swap(t_stack *stack, int ss)
{
	int	temp;

	if (ss == 0)
		ft_printf("s%c\n", stack->name);
	temp = stack->buf[0];
	stack->buf[0] = stack->buf[1];
	stack->buf[1] = temp;
}

void	ft_swap_a_b(t_stack *a, t_stack *b)
{
	ft_printf("ss\n");
	ft_swap(a, 1);
	ft_swap(b, 1);
}
