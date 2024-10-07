/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:08:24 by pgiroux           #+#    #+#             */
/*   Updated: 2024/10/01 13:42:54 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_swap(t_stack *a, t_stack *b)
{
	ft_push(a, b);
	if (a->size > 3)
		ft_push(a, b);
	ft_update(a, b);
	while (a->size > 3)
	{
		move(a, b, 0);
		ft_push(a, b);
	}
	ft_three_sort(a);
	while (b->size > 0)
	{
		move(b, a, 1);
		ft_push(b, a);
	}
	if (!ft_is_sort(a))
		ft_remove(a);
}

void	ft_remove(t_stack *a)
{
	{
		while (a->max != (a->cap - 1))
		{
			if (a->max > a->median)
				ft_reverse_rotate(a, 0);
			else
				ft_rotate(a, 0);
			update_stack(a);
		}
	}
}
