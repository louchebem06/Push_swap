/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isduplicate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 21:37:38 by bledda            #+#    #+#             */
/*   Updated: 2021/05/16 22:02:22 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_isduplicate(int ac, char **av)
{
	t_isduplicate	var;

	var.j = 0;
	while (var.j++ < ac)
	{
		var.i = var.j + 1;
		if (var.i == ac)
			return (0);
		var.tmp = ft_strdup(av[var.j]);
		while (av[var.i])
		{
			if (ft_strlen(var.tmp) > ft_strlen(av[var.i]))
				var.size = ft_strlen(var.tmp);
			else
				var.size = ft_strlen(av[var.i]);
			if (ft_strncmp(var.tmp, av[var.i], var.size) == 0)
			{
				free(var.tmp);
				return (1);
			}
			var.i++;
		}
		free(var.tmp);
	}
	return (0);
}
