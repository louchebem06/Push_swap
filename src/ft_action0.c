/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action0.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 19:11:00 by bledda            #+#    #+#             */
/*   Updated: 2021/05/20 19:11:51 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_action_ss(int *tabA, int *size_a, int *tabB, int *size_b)
{
	ft_putstr_fd("ss\n", 1);
	ss(tabA, size_a, tabB, size_b);
}

void	ft_action_sa(int *tabA, int *size_a)
{
	ft_putstr_fd("sa\n", 1);
	sx(tabA, size_a);
}

void	ft_action_sb(int *tabB, int *size_b)
{
	ft_putstr_fd("sb\n", 1);
	sx(tabB, size_b);
}

void	ft_action_pb(int *tabA, int *size_a, int *tabB, int *size_b)
{
	ft_putstr_fd("pb\n", 1);
	px(tabA, size_a, tabB, size_b);
}

void	ft_action_pa(int *tabA, int *size_a, int *tabB, int *size_b)
{
	ft_putstr_fd("pa\n", 1);
	px(tabB, size_b, tabA, size_a);
}
