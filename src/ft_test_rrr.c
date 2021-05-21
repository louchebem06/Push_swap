/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:38:13 by bledda            #+#    #+#             */
/*   Updated: 2021/05/21 08:07:47 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_test_rrr(int *tabA, int *size_a, int *tabB, int *size_b)
{
	if (*size_a >= 3 && *size_b >= 3)
	{
		rrr(tabA, size_a, tabB, size_b);
		if (ft_ASC(tabA, size_a) && ft_DEC(tabB, size_b))
		{
			rr(tabA, size_a, tabB, size_b);
			return (1);
		}
		else
		{
			rr(tabA, size_a, tabB, size_b);
			return (0);
		}
	}
	else
		return (0);
}

int	ft_test_rrxa(int *tabA, int *size_a)
{
	if (*size_a >= 3)
	{
		rrx(tabA, size_a);
		if (ft_ASC(tabA, size_a))
		{
			rx(tabA, size_a);
			return (1);
		}
		else
		{
			rx(tabA, size_a);
			return (0);
		}
	}
	else
		return (0);
}

int	ft_test_rrxb(int *tabB, int *size_b)
{
	if (*size_b >= 3)
	{
		rrx(tabB, size_b);
		if (ft_DEC(tabB, size_b))
		{
			rx(tabB, size_b);
			return (1);
		}
		else
		{
			rx(tabB, size_b);
			return (0);
		}
	}
	else
		return (0);
}

int	ft_test_rrxa2(int *tabA, int *size_a)
{
	if (*size_a >= 3)
	{
		rrx(tabA, size_a);
		sx(tabA, size_a);
		if (ft_ASC(tabA, size_a))
		{
			sx(tabA, size_a);
			rx(tabA, size_a);
			return (1);
		}
		else
		{
			sx(tabA, size_a);
			rx(tabA, size_a);
			return (0);
		}
	}
	else
		return (0);
}

int	ft_test_rrxb2(int *tabB, int *size_b)
{
	if (*size_b >= 3)
	{
		rrx(tabB, size_b);
		sx(tabB, size_b);
		if (ft_DEC(tabB, size_b))
		{
			sx(tabB, size_b);
			rx(tabB, size_b);
			return (1);
		}
		else
		{
			sx(tabB, size_b);
			rx(tabB, size_b);
			return (0);
		}
	}
	else
		return (0);
}
