/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 01:18:07 by bledda            #+#    #+#             */
/*   Updated: 2021/05/25 21:23:37 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_algo	int_algo100(int *tabA, int *size_a)
{
	t_algo	var;

	var.max = ft_max(tabA, size_a);
	var.b = 5;
	var.i = 1;
	var.hf = ft_hold_first(tabA, size_a, var.max / var.b);
	var.hs = ft_hold_second(tabA, size_a, var.max / var.b);
	return (var);
}

void	algo100(int *tabA, int *size_a, int *tabB, int *size_b)
{
	t_algo	v;

	v = int_algo100(tabA, size_a);
	if (*size_a != 0)
	{
		while (v.hf == -1 && v.hs == -1 && v.i < v.b && v.i++)
			hold_value(&v, size_a, tabA);
		if (v.hf != -1 || v.hs != -1)
			hold_select(v, tabA, size_a);
		if (*size_b == 0)
			ft_action_pb(tabA, size_a, tabB, size_b);
		else
		{
			v.min_b = ft_min(tabB, size_b);
			min_max_up(tabB, size_b, v.min_b);
			ft_action_pb(tabA, size_a, tabB, size_b);
		}
		algo100(tabA, size_a, tabB, size_b);
	}
	while (*size_b != 0)
	{
		v.max_b = ft_max(tabB, size_b);
		min_max_up(tabB, size_b, v.max_b);
		ft_action_pa(tabA, size_a, tabB, size_b);
	}
}
