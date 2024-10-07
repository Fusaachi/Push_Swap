/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:58:19 by pgiroux           #+#    #+#             */
/*   Updated: 2024/09/30 09:49:54 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_rotate(t_stack *stack, int rr)
{
	int	temp;
	int	i;

	if (rr == 0)
		ft_printf("r%c\n", stack->name);
	i = 0;
	temp = stack->buf[i];
	while (i < stack->size - 1)
	{
		stack->buf[i] = stack->buf[i + 1];
		i++;
	}
	stack->buf[stack->size - 1] = temp;
}

void	ft_rotate_a_b(t_stack *a, t_stack *b)
{
	ft_printf("rr\n");
	ft_rotate(a, 1);
	ft_rotate(b, 1);
}
