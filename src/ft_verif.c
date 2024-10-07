/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:01:39 by pgiroux           #+#    #+#             */
/*   Updated: 2024/10/04 12:54:47 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_verif_arg(int argc, char **argv)
{
	char		**stack;
	int			i;
	long int	temp;

	i = 0;
	if (argc < 2)
		exit(1);
	if (argc == 2)
	{
		stack = ft_split(argv[1], ' ');
		if (!stack)
			ft_error("Error");
	}
	else
		stack = &argv[1];
	while (stack[i] != NULL)
	{
		temp = ft_atol(stack[i]);
		if (!ft_isnum(stack[i]) || temp < -2147483648
			|| temp > 2147483647 || ft_doublon(temp, stack, i))
			ft_error_arg("Error", argc, stack);
		i++;
	}
	if (argc == 2)
		ft_free(stack);
}

int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[i] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_doublon(int temp, char **stack, int i)
{
	i++;
	while (stack[i])
	{
		if (temp == ft_atol(stack[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_string(char *string)
{
	char	**temp;
	int		i;

	i = 0;
	temp = ft_split(string, ' ');
	if (!temp)
		exit(1);
	while (temp[i] != NULL)
		i++;
	return (ft_free(temp), i);
}

int	ft_is_sort(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->size - 1)
	{
		if (a->buf[i] < a->buf[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}
