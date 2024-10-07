/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:19:18 by pgiroux           #+#    #+#             */
/*   Updated: 2024/09/30 10:03:18 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_reverse_rotate(t_stack *stack, int rrr)
{
	int	temp;
	int	i;

	if (rrr == 0)
		ft_printf("rr%c\n", stack->name);
	i = stack->size - 1;
	temp = stack->buf[i];
	while (i > 0)
	{
		stack->buf[i] = stack->buf[i - 1];
		i--;
	}
	stack->buf[0] = temp;
}

void	ft_reverse_rotate_a_b(t_stack *a, t_stack *b)
{
	ft_printf("rrr\n");
	ft_reverse_rotate(a, 1);
	ft_reverse_rotate(b, 1);
}
