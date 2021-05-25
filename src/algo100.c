/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 01:18:07 by bledda            #+#    #+#             */
/*   Updated: 2021/05/25 02:31:05 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	min_max_up(int *tab, int *size, int search)
{
	int i;
	int j;
	int z;
	int x;

	i = 0;
	j = 0;
	z = 0;
	x = 0;
	if (tab[0] == search)
		return ;
	while (tab[0] != search)
	{
		rx(tab, size);
		i++;
	}
	while (x != i)
	{
		rrx(tab, size);
		x++;
	}
	while (tab[0] != search)
	{
		rrx(tab, size);
		j++;
	}
	while (z != j)
	{
		rx(tab, size);
		z++;
	}
	if (j <= i)
	{
		while (j > 0)
		{
			ft_action_rrb(tab, size);
			j--;
		}
	}
	else
	{
		while (i > 0)
		{
			ft_action_rb(tab, size);
			i--;
		}
	}
}

int ft_hold_first(int *tabA, int *size_a, int value)
{
	int i;

	i = 0;
	while (i < *size_a/2)
	{
		if (tabA[i] < value)
			return (i);
		i++;
	}
	return (-1);
}

int ft_hold_second(int *tabA, int *size_a, int value)
{
	int i;

	i = *size_a - 1;
	while (i > *size_a/2)
	{
		if (tabA[i] < value)
			return (i);
		i--;
	}
	return (-1);
}

void	algo100(int *tabA, int *size_a, int *tabB, int *size_b)
{
	int max;
	int min_b;
	int max_b;
	int hold_first;
	int hold_second;

	max = ft_max(tabA, size_a);
	hold_first = ft_hold_first(tabA, size_a, max/5);
	hold_second = ft_hold_second(tabA, size_a, max/5);
	if (*size_a != 0)
	{
		if (hold_first == -1 && hold_second == -1)
		{
			hold_first = ft_hold_first(tabA, size_a, (max/5)*2);
			hold_second = ft_hold_second(tabA, size_a, (max/5)*2);
		}
		if (hold_first == -1 && hold_second == -1)
		{
			hold_first = ft_hold_first(tabA, size_a, (max/5)*3);
			hold_second = ft_hold_second(tabA, size_a, (max/5)*3);
		}
		if (hold_first == -1 && hold_second == -1)
		{
			hold_first = ft_hold_first(tabA, size_a, (max/5)*3);
			hold_second = ft_hold_second(tabA, size_a, (max/5)*3);
		}
		if (hold_first == -1 && hold_second == -1)
		{
			hold_first = ft_hold_first(tabA, size_a, max);
			hold_second = ft_hold_second(tabA, size_a, max);
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
			min_b = ft_max(tabB, size_b);
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
