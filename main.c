/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 20:23:55 by bledda            #+#    #+#             */
/*   Updated: 2021/05/16 22:31:53 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
sa : swap a - intervertit les 2 premiers éléments au sommet de la pile a.
Ne fait rien s’il n’y en a qu’un ou aucun.
sb : swap b - intervertit les 2 premiers éléments au sommet de la pile b.
Ne fait rien s’il n’y en a qu’un ou aucun.
ss : sa et sb en même temps.
pa : push a - prend le premier élément au sommet de b et le met sur a.
Ne fait rien si b est vide.
pb : push b - prend le premier élément au sommet de a et le met sur b.
Ne fait rien si a est vide.
ra : rotate a - décale d’une position vers le haut tous les élements de la
pile a. Le premier élément devient le dernier.
rb : rotate b - décale d’une position vers le haut tous les élements de la
pile b. Le premier élément devient le dernier.
rr : ra et rb en même temps.
rra : reverse rotate a - décale d’une position vers le bas tous les élements
de la pile a. Le dernier élément devient le premier.
rrb : reverse rotate b - décale d’une position vers le bas tous les élements
de la pile b. Le dernier élément devient le premier.
rrr : rra et rrb en même temps.
*/
int	*ft_check(int ac, char **av)
{
	t_check	var;

	var.i = 0;
	var.j = 1;
	var.tab = malloc(sizeof(int) * (ac - 1));
	if (ac <= 2 || ft_strisdigit(ac, av) || ft_isduplicate(ac, av))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	while (var.j < ac)
	{
		if (atoi(av[var.j]) <= 2147483647 && atoi(av[var.j]) >= -2147483648)
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
		free(tab);
	}
	return (0);
}
