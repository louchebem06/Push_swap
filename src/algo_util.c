/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:17:02 by bledda            #+#    #+#             */
/*   Updated: 2021/05/25 17:17:07 by bledda           ###   ########.fr       */
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