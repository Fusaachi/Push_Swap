/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:23:08 by pgiroux           #+#    #+#             */
/*   Updated: 2024/09/30 09:48:26 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_push(t_stack *src, t_stack *dest)
{
	ft_printf("p%c\n", dest->name);
	ft_down(dest);
	dest->buf[0] = src->buf[0];
	ft_up(src);
}

void	ft_up(t_stack *stk)
{
	int	i;

	i = 0;
	while (i < stk->size)
	{
		stk->buf[i] = stk->buf[i + 1];
		i++;
	}
	stk->size--;
}

void	ft_down(t_stack *stk)
{
	int	i;

	i = stk->size;
	stk->size++;
	while (i > 0)
	{
		stk->buf[i] = stk->buf[i - 1];
		i--;
	}
}
