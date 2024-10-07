/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_hit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:08:03 by pgiroux           #+#    #+#             */
/*   Updated: 2024/10/01 13:26:13 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_hit	best_hit(t_stack *a, t_stack *b, int mouv)
{
	t_hit	hit;
	int		i;

	i = 0;
	hit.score = 9999;
	ft_update(a, b);
	if (!mouv)
	{
		while (i < a->size)
		{
			if (ft_cost(a, b, i).score < hit.score)
				hit = ft_cost(a, b, i);
			i++;
		}
	}
	else
	{
		while (i < a->size)
		{
			if (ft_cost(a, b, i).score < hit.score)
				hit = ft_cost(a, b, i);
			i++;
		}
	}
	return (hit);
}

t_hit	ft_cost(t_stack *src, t_stack *dest, int num)
{
	t_hit	hit;

	if (src->name == 'a')
		hit.index_dest = target(dest, src, num);
	else
		hit.index_dest = target_reverse(dest, src, num);
	hit.index_src = num;
	hit.reverse_src = 0;
	hit.reverse_dest = 0;
	if (hit.index_src > src->size / 2)
	{
		hit.index_src = src->size - hit.index_src;
		hit.reverse_src = 1;
	}
	if (hit.index_dest > dest->size / 2)
	{
		hit.index_dest = dest->size - hit.index_dest;
		hit.reverse_dest = 1;
	}
	hit.score = hit.index_src + hit.index_dest;
	return (hit);
}
