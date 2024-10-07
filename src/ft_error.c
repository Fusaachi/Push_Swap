/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:36:19 by pgiroux           #+#    #+#             */
/*   Updated: 2024/10/03 15:03:22 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(char *mess)
{
	ft_putendl_fd(mess, 2);
	exit(1);
}

void	ft_error_arg(char *mess, int argc, char **stack)
{
	ft_putendl_fd(mess, 2);
	if (argc == 2)
		ft_free(stack);
	exit(1);
}
