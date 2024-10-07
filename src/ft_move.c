/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:37:59 by pgiroux           #+#    #+#             */
/*   Updated: 2024/10/01 12:20:33 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	r_all(t_stack *a, t_stack *b, t_hit hit)
{
	int	i;

	i = 0;
	if (hit.reverse_src == hit.reverse_dest)
	{
		while (i < hit.index_src && i < hit.index_dest)
		{
			if (hit.reverse_src)
				ft_reverse_rotate_a_b(a, b);
			else
				ft_rotate_a_b(a, b);
			i++;
		}
	}
	return (i);
}

void	move(t_stack *a, t_stack *b, int mouv)
{
	t_hit	hit;
	int		save;

	hit = best_hit(a, b, mouv);
	a->i = r_all(a, b, hit);
	save = a->i ;
	if (a->name == 'a')
		best_hit(a, b, mouv);
	else
		best_hit(b, a, mouv);
	while (a->i++ < hit.index_src)
	{
		if (hit.reverse_src)
			ft_reverse_rotate(a, 0);
		else
			ft_rotate(a, 0);
	}
	while (save++ < hit.index_dest)
	{
		if (hit.reverse_dest)
			ft_reverse_rotate(b, 0);
		else
			ft_rotate(b, 0);
	}
}
