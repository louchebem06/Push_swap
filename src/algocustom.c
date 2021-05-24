/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algocustom.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:51:21 by bledda            #+#    #+#             */
/*   Updated: 2021/05/24 17:15:49 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	move3(int *tabA, int *size_a, int *tabB, int *size_b)
{
	if (ft_test_rrxa2(tabA, size_a))
	{
		ft_action_rra(tabA, size_a);
		if (*size_b >= 2 && tabB[0] < tabB[1])
			ft_action_ss(tabA, size_a, tabB, size_b);
		else
			ft_action_sa(tabA, size_a);
	}
	else if (ft_test_rxb2(tabB, size_b))
	{
		ft_action_rb(tabB, size_b);
		if (*size_a >= 2 && tabA[0] > tabA[1])
			ft_action_ss(tabA, size_a, tabB, size_b);
		else
			ft_action_sb(tabB, size_b);
	}
	else
		return (0);
	return (1);
}

int	move1(int *tabA, int *size_a, int *tabB, int *size_b)
{
	if (ft_test_rr(tabA, size_a, tabB, size_b))
		ft_action_rr(tabA, size_a, tabB, size_b);
	else if (ft_test_rrr(tabA, size_a, tabB, size_b))
		ft_action_rrr(tabA, size_a, tabB, size_b);
	else if (ft_test_rxa2(tabA, size_a))
	{
		ft_action_ra(tabA, size_a);
		if (*size_b >= 2 && tabB[0] < tabB[1])
			ft_action_ss(tabA, size_a, tabB, size_b);
		else
			ft_action_sa(tabA, size_a);
	}
	else if (ft_test_rrxa2(tabA, size_a))
	{
		ft_action_rra(tabA, size_a);
		if (*size_b >= 2 && tabB[0] < tabB[1])
			ft_action_ss(tabA, size_a, tabB, size_b);
		else
			ft_action_sa(tabA, size_a);
	}
	else if (move3(tabA, size_a, tabB, size_b))
		return (1);
	else
		return (0);
	return (1);
}

int	move2(int *tabA, int *size_a, int *tabB, int *size_b)
{
	if (ft_test_rrxb2(tabB, size_b))
	{
		ft_action_rrb(tabB, size_b);
		ft_action_sb(tabB, size_b);
	}
	else if (ft_test_rrxb2(tabB, size_b))
	{
		ft_action_rrb(tabB, size_b);
		ft_action_sb(tabB, size_b);
	}
	else if (ft_test_rxa(tabA, size_a))
		ft_action_ra(tabA, size_a);
	else if (ft_test_rrxa(tabA, size_a))
		ft_action_rra(tabA, size_a);
	else if (ft_test_rxb(tabB, size_b))
		ft_action_rb(tabB, size_b);
	else
		return (0);
	return (1);
}

void	move(int *tabA, int *size_a, int *tabB, int *size_b)
{
	int	test;

	test = move1(tabA, size_a, tabB, size_b);
	if (test == 0)
	{
		test = move2(tabA, size_a, tabB, size_b);
		if (test == 0)
		{
			if (ft_test_rrxb(tabB, size_b))
				ft_action_rrb(tabB, size_b);
			else if (*size_a >= 2 && tabA[0] > tabA[1]
				&& tabB[0] < tabB[1] && *size_b >= 2)
				ft_action_ss(tabA, size_a, tabB, size_b);
			else if (*size_a >= 2 && tabA[0] > tabA[1])
				ft_action_sa(tabA, size_a);
			else if (*size_b >= 2 && tabB[0] < tabB[1])
				ft_action_sb(tabB, size_b);
			else if (!ft_ASC(tabA, size_a))
				ft_action_pb(tabA, size_a, tabB, size_b);
			else if (ft_ASC(tabA, size_a))
				ft_action_pa(tabA, size_a, tabB, size_b);
		}
	}
}

void	algocustom(int *tabA, int *size_a, int *tabB, int *size_b)
{
	move(tabA, size_a, tabB, size_b);
}
