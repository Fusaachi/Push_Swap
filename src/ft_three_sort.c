/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:35:41 by pgiroux           #+#    #+#             */
/*   Updated: 2024/09/23 16:52:15 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_three_sort(t_stack *a)
{
	int	pos;

	pos = max_value(a->buf, a->size);
	while (!ft_is_sort(a))
	{
		if (pos == 0)
			ft_rotate(a, 0);
		else if (pos == 1)
			ft_reverse_rotate(a, 0);
		else
			ft_swap(a, 0);
		pos = 2;
	}
}

int	max_value(int *stack, int size)
{
	int	i;
	int	max;

	i = 0;
	max = 0;
	while (i < size)
	{
		if (stack[i] > stack[max])
			max = i;
		i++;
	}
	return (max);
}

int	min_value(int *stack, int size)
{
	int	i;
	int	min;

	i = 0;
	min = 0;
	while (i < size)
	{
		if (stack[i] < stack[min])
			min = i;
		i++;
	}
	return (min);
}
