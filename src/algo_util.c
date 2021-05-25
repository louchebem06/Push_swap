/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:17:02 by bledda            #+#    #+#             */
/*   Updated: 2021/05/25 21:21:40 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void 	hold_value(t_algo *var, int *size_a, int *tabA)
{
	var->hf = ft_hold_first(tabA, size_a, (var->max / var->b) * var->i);
	var->hs = ft_hold_second(tabA, size_a, (var->max / var->b) * var->i);
}

void	hold_select(t_algo var, int *tabA, int *size_a)
{
	if (var.hf == -1)
		while (var.hs != 0 && var.hs--)
			ft_action_ra(tabA, size_a);
	else if (var.hs == -1)
		while (var.hf != 0 && var.hf--)
			ft_action_rra(tabA, size_a);
	else if (var.hf <= var.hs)
		while (var.hf != 0 && var.hf--)
			ft_action_rra(tabA, size_a);
	else
		while (var.hs != 0 && var.hs--)
			ft_action_ra(tabA, size_a);
}

void	min_max_up(int *tab, int *size, int search)
{
	t_min_max	var;

	var.i = 0;
	var.j = 0;
	var.z = 0;
	var.x = 0;
	if (tab[0] == search)
		return ;
	while (tab[0] != search && ++var.i)
		rx(tab, size);
	while (var.x != var.i && ++var.x)
		rrx(tab, size);
	while (tab[0] != search && ++var.j)
		rrx(tab, size);
	while (var.z != var.j && ++var.z)
		rx(tab, size);
	if (var.j <= var.i)
		while (var.j > 0 && var.j--)
			ft_action_rrb(tab, size);
	else
		while (var.i > 0 && var.i--)
			ft_action_rb(tab, size);
}

int	ft_hold_first(int *tabA, int *size_a, int value)
{
	int	i;

	i = 0;
	while (i < *size_a / 2)
	{
		if (tabA[i] < value)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_hold_second(int *tabA, int *size_a, int value)
{
	int	i;

	i = *size_a - 1;
	while (i > *size_a / 2)
	{
		if (tabA[i] < value)
			return (i);
		i--;
	}
	return (-1);
}
