/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:29:54 by pgiroux           #+#    #+#             */
/*   Updated: 2024/10/03 13:17:13 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_init_stack(t_stack *stack, char **argv, int cap, char name)
{
	int	i;

	stack->name = name;
	stack->cap = cap;
	if (stack->name == 'a')
		stack->size = cap;
	else
		stack->size = 0;
	stack->buf = ft_calloc(cap, sizeof(int *));
	if (!stack->buf)
		exit(1);
	i = 0;
	while (i < stack->size)
	{
		stack->buf[i] = ft_atol(argv[i]);
		i++;
	}
}

void	ft_init(t_stack *a, t_stack *b, int argc, char **argv)
{
	char	**buf;
	int		size;

	if (argc == 2 && ft_is_string(argv[1]) == 1)
		exit(1);
	else if (argc == 2 && ft_is_string(argv[1]))
	{
		size = ft_is_string(argv[1]);
		buf = ft_split(argv[1], ' ');
		if (!buf)
			ft_error("Error");
	}
	else
	{
		size = argc - 1;
		buf = &argv[1];
	}
	ft_init_stack(a, buf, size, 'a');
	ft_init_stack(b, buf, size, 'b');
	if (argc == 2 && ft_is_string(argv[1]) > 1)
		ft_free(buf);
}

void	update_stack(t_stack *stack)
{
	stack->min = min_value(stack->buf, stack->size);
	stack->max = max_value(stack->buf, stack->size);
	stack->median = stack->size / 2;
}

void	ft_update(t_stack *a, t_stack *b)
{
	update_stack(a);
	update_stack(b);
}
