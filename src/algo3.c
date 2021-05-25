/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 23:34:11 by bledda            #+#    #+#             */
/*   Updated: 2021/05/25 00:57:03 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algo3(int *tabA, int *size_a)
{
	int min;
	int max;

	min = ft_min(tabA, size_a);
	max = ft_max(tabA, size_a);
	while (!ft_ASC(tabA, size_a))
	{
		if (tabA[1] == max && tabA[2] == min)
			ft_action_ra(tabA, size_a);
		else if (tabA[0] == max && tabA[1] == min)
			ft_action_rra(tabA, size_a);
		else if (!ft_ASC(tabA, size_a))
			ft_action_sa(tabA, size_a);
	}
}
