/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:55:54 by pgiroux           #+#    #+#             */
/*   Updated: 2024/10/01 13:41:13 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	ft_verif_arg(argc, argv);
	ft_init(&a, &b, argc, argv);
	if (!ft_is_sort(&a))
	{
		if (a.size <= 3)
			ft_three_sort(&a);
		else
			push_swap(&a, &b);
	}
	ft_finish(&a, &b);
	return (0);
}
