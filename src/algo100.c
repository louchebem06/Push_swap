/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 01:18:07 by bledda            #+#    #+#             */
/*   Updated: 2021/05/25 17:16:51 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algo100(int *tabA, int *size_a, int *tabB, int *size_b)
{
	int max;
	int min_b;
	int max_b;
	int hold_first;
	int hold_second;
	int base;
	int indice;

	max = ft_max(tabA, size_a);
	base = 5;
	indice = 2;
	hold_first = ft_hold_first(tabA, size_a, max/base);
	hold_second = ft_hold_second(tabA, size_a, max/base);
	if (*size_a != 0)
	{
		while (hold_first == -1 && hold_second == -1 && indice < base)
		{
			hold_first = ft_hold_first(tabA, size_a, (max/base)*indice);
			hold_second = ft_hold_second(tabA, size_a, (max/base)*indice);
			indice++;
		}
		if (hold_first != -1 || hold_second != -1)
		{
			if (hold_first == -1)
			{
				while (hold_second != 0)
				{
					ft_action_ra(tabA, size_a);
					hold_second--;
				}
			}
			else if (hold_second == -1)
			{
				while (hold_first != 0)
				{
					ft_action_rra(tabA, size_a);
					hold_first--;
				}
			}
			else if (hold_first <= hold_second)
			{
				while (hold_first != 0)
				{
					ft_action_rra(tabA, size_a);
					hold_first--;
				}
			}
			else
			{
				while (hold_second != 0)
				{
					ft_action_ra(tabA, size_a);
					hold_second--;
				}
			}
		}

		if (*size_b == 0)
			ft_action_pb(tabA, size_a, tabB, size_b);
		else
		{
			min_b = ft_min(tabB, size_b);
			min_max_up(tabB, size_b, min_b);
			ft_action_pb(tabA, size_a, tabB, size_b);
		}
		algo100(tabA, size_a, tabB, size_b);
	}
	else
	{
		while (*size_b != 0)
		{
			max_b = ft_max(tabB, size_b);
			min_max_up(tabB, size_b, max_b);
			ft_action_pa(tabA, size_a, tabB, size_b);
		}
	}
}
