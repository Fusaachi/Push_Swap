/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_target.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:07:07 by pgiroux           #+#    #+#             */
/*   Updated: 2024/10/01 11:43:41 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

int	target(t_stack *b, t_stack *a, int num)
{
	int	i;
	int	target;

	i = 0;
	target = b->min;
	if (a->buf[num] < b->buf[target] || a->buf[num] > b->buf[b->max])
		return (b->max);
	while (i < b->size)
	{
		if (b->buf[i] < a->buf[num] && b->buf[i] > b->buf[target])
			target = i;
		i++;
	}
	return (target);
}

int	target_reverse(t_stack *a, t_stack *b, int num)
{
	int	i;
	int	target;

	i = 0;
	target = a->max;
	if (b->buf[num] > a->buf[target] || b->buf[num] < a->buf[a->min])
		return (a->min);
	while (i < a->size)
	{
		if (a->buf[i] > b->buf[num] && a->buf[i] < a->buf[target])
			target = i;
		i++;
	}
	return (target);
}
