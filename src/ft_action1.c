/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 19:11:24 by bledda            #+#    #+#             */
/*   Updated: 2021/05/21 08:15:46 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_action_rr(int *tabA, int *size_a, int *tabB, int *size_b)
{
	ft_putstr_fd("rr\n", 1);
	rr(tabA, size_a, tabB, size_b);
}

void	ft_action_rrr(int *tabA, int *size_a, int *tabB, int *size_b)
{
	ft_putstr_fd("rrr\n", 1);
	rrr(tabA, size_a, tabB, size_b);
}

void	ft_action_ra(int *tabA, int *size_a)
{
	ft_putstr_fd("rra\n", 1);
	rx(tabA, size_a);
}

void	ft_action_rb(int *tabB, int *size_b)
{
	ft_putstr_fd("rrb\n", 1);
	rx(tabB, size_b);
}

void	ft_action_rra(int *tabA, int *size_a)
{
	ft_putstr_fd("ra\n", 1);
	rrx(tabA, size_a);
}
