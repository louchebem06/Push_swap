/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 20:23:55 by bledda            #+#    #+#             */
/*   Updated: 2021/05/17 14:15:44 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_check(int ac, char **av)
{
	t_check	var;

	var.i = 0;
	var.j = 1;
	var.tab = malloc(sizeof(int) * (ac));
	if (ac <= 2 || ft_strisdigit(ac, av) || ft_isduplicate(ac, av))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	while (var.j < ac)
	{
		if (atoi(av[var.j]) <= INT_MAX && atoi(av[var.j]) >= INT_MIN)
			var.tab[var.i] = atoi(av[var.j]);
		else
		{
			free(var.tab);
			ft_putstr_fd("Error\n", 2);
			return (0);
		}
		var.j++;
		var.i++;
	}
	return (var.tab);
}

int	main(int ac, char **av)
{
	int	*tab;

	if (ft_check(ac, av))
	{
		tab = ft_check(ac, av);
		ft_push_swap(tab);
	}
	return (0);
}
