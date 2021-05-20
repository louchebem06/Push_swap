/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 23:48:57 by bledda            #+#    #+#             */
/*   Updated: 2021/05/20 19:43:40 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move(int *tabA, int *size_a, int *tabB, int *size_b)
{
	if (*size_a >= 2 && tabA[*size_a - 1] < tabA[*size_a - 2]
		&& tabB[*size_b - 1] > tabB[*size_b - 2] && *size_b >= 2)
		ft_action_ss(tabA, size_a, tabB, size_b);
	else if (*size_a >= 2 && tabA[*size_a - 1] < tabA[*size_a - 2])
		ft_action_sa(tabA, size_a);
	else if (*size_b >= 2 && tabB[*size_b - 1] > tabB[*size_b - 2])
		ft_action_sb(tabB, size_b);
	else if (!ft_ASC(tabA, size_a))
		ft_action_pb(tabA, size_a, tabB, size_b);
	else if (ft_ASC(tabA, size_a) && ft_DEC(tabB, size_b))
		ft_action_pa(tabA, size_a, tabB, size_b);
	else if (ft_test_rr(tabA, size_a, tabB, size_b))
		ft_action_rr(tabA, size_a, tabB, size_b);
	else if (ft_test_rrr(tabA, size_a, tabB, size_b))
		ft_action_rrr(tabA, size_a, tabB, size_b);
	else if (ft_test_rxa(tabA, size_a))
		ft_action_ra(tabA, size_a);
	else if (ft_test_rrxa(tabA, size_a))
		ft_action_rra(tabA, size_a);
	else if (ft_test_rxb(tabB, size_b))
		ft_action_rb(tabB, size_b);
	else if (ft_test_rrxb(tabB, size_b))
		ft_action_rrb(tabB, size_b);
	else
		ft_action_rb(tabB, size_b);
}

void	ft_push_swap(int *tabA, int ac)
{
	int	size_a;
	int	size_b;
	int	*tabB;

	size_a = ac - 1;
	size_b = 0;
	tabB = malloc(sizeof(int) * ac);
	while (1)
	{
		if (ft_ASC(tabA, &size_a) && size_b == 0)
			break ;
		move(tabA, &size_a, tabB, &size_b);
	}
	free(tabA);
	free(tabB);
}
