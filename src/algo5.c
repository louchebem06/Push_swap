/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 23:49:48 by bledda            #+#    #+#             */
/*   Updated: 2021/05/25 01:06:11 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(int *tabA, int *size_a)
{
	if (ft_test_rxa(tabA, size_a))
		ft_action_ra(tabA, size_a);
	else if (ft_test_rrxa(tabA, size_a))
		ft_action_rra(tabA, size_a);
	else if (ft_test_rxa2(tabA, size_a))
	{
		ft_action_ra(tabA, size_a);
		ft_action_sa(tabA, size_a);
	}
	else if (ft_test_rrxa2(tabA, size_a))
	{
		ft_action_rra(tabA, size_a);
		ft_action_sa(tabA, size_a);
	}
	else
	{
		sx(tabA, size_a);
		if (ft_ASC(tabA, size_a))
		{
			sx(tabA, size_a);
			ft_action_sa(tabA, size_a);
		}
		else
			sx(tabA, size_a);
	}
}

void	switch_a_r(int *tabA, int *size_a)
{
	rx(tabA, size_a);
	sx(tabA, size_a);
	rrx(tabA, size_a);
	rrx(tabA, size_a);
	if (ft_ASC(tabA, size_a))
	{
		rrx(tabA, size_a);
		rrx(tabA, size_a);
		sx(tabA, size_a);
		rx(tabA, size_a);
		ft_action_ra(tabA, size_a);
		ft_action_sa(tabA, size_a);
		ft_action_rra(tabA, size_a);
		ft_action_rra(tabA, size_a);
	}
	else
	{
		rrx(tabA, size_a);
		rrx(tabA, size_a);
		sx(tabA, size_a);
		rx(tabA, size_a);
	}
}

void	switch_a_rr(int *tabA, int *size_a)
{
	rrx(tabA, size_a);
	sx(tabA, size_a);
	rx(tabA, size_a);
	rx(tabA, size_a);
	if (ft_ASC(tabA, size_a))
	{
		rx(tabA, size_a);
		rx(tabA, size_a);
		sx(tabA, size_a);
		rrx(tabA, size_a);
		ft_action_rra(tabA, size_a);
		ft_action_sa(tabA, size_a);
		ft_action_ra(tabA, size_a);
		ft_action_ra(tabA, size_a);
	}
	else
	{
		rx(tabA, size_a);
		rx(tabA, size_a);
		sx(tabA, size_a);
		rrx(tabA, size_a);
	}
}

void	rotate_infer(int *tabA, int *size_a, int *tabB)
{
	int count_ra;
	int count_rra;
	int i;

	count_ra = 0;
	count_rra = 0;
	i = 0;
	while (tabA[0] > tabB[0])
	{
		rx(tabA, size_a);
		count_ra++;
	}
	while (i <= count_ra)
	{
		rrx(tabA, size_a);
		i++;
	}
	i = 0;
	while (tabA[0] > tabB[0])
	{
		rrx(tabA, size_a);
		count_rra++;
	}
	while (i <= count_rra)
	{
		rrx(tabA, size_a);
		i++;
	}
}

void	algo5(int *tabA, int *size_a, int *tabB, int *size_b)
{
	int min;
	int max;

	min = ft_min(tabA, size_a);
	max = ft_max(tabA, size_a);
	while (*size_a != 3)
		ft_action_pb(tabA, size_a, tabB, size_b);
	algo3(tabA, size_a);
	ft_action_pa(tabA, size_a, tabB, size_b);
	rotate_a(tabA, size_a);
	if (!ft_ASC(tabA, size_a))
	{
		switch_a_r(tabA, size_a);
		switch_a_rr(tabA, size_a);
	}
	if (*size_b != 0)
	{
		if (tabB[0] != min && tabB[0] != max)
			rotate_infer(tabA, size_a, tabB);
		else
		{
			ft_action_pa(tabA, size_a, tabB, size_b);
			if (!ft_ASC(tabA, size_a))
			{
				switch_a_r(tabA, size_a);
				switch_a_rr(tabA, size_a);
			}
		}
	}
}