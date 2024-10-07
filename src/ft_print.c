/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:10:07 by pgiroux           #+#    #+#             */
/*   Updated: 2024/10/01 11:42:19 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_print(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (i < a->cap)
	{
		printf("%d  %d\n", a->buf[i], b->buf[i]);
		i++;
	}
}
