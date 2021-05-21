/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:37:40 by bledda            #+#    #+#             */
/*   Updated: 2021/05/21 08:06:31 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_test_rr(int *tabA, int *size_a, int *tabB, int *size_b)
{
	if (*size_a >= 3 && *size_b >= 3)
	{
		rr(tabA, size_a, tabB, size_b);
		if (ft_ASC(tabA, size_a) && ft_DEC(tabB, size_b))
		{
			rrr(tabA, size_a, tabB, size_b);
			return (1);
		}
		else
		{
			rrr(tabA, size_a, tabB, size_b);
			return (0);
		}
	}
	else
		return (0);
}

int	ft_test_rxa(int *tabA, int *size_a)
{
	if (*size_a >= 3)
	{
		rx(tabA, size_a);
		if (ft_ASC(tabA, size_a))
		{
			rrx(tabA, size_a);
			return (1);
		}
		else
		{
			rrx(tabA, size_a);
			return (0);
		}
	}
	else
		return (0);
}

int	ft_test_rxb(int *tabB, int *size_b)
{
	if (*size_b >= 3)
	{
		rx(tabB, size_b);
		if (ft_DEC(tabB, size_b))
		{
			rrx(tabB, size_b);
			return (1);
		}
		else
		{
			rrx(tabB, size_b);
			return (0);
		}
	}
	else
		return (0);
}

int	ft_test_rxa2(int *tabA, int *size_a)
{
	if (*size_a >= 3)
	{
		rx(tabA, size_a);
		sx(tabA, size_a);
		if (ft_ASC(tabA, size_a))
		{
			sx(tabA, size_a);
			rrx(tabA, size_a);
			return (1);
		}
		else
		{
			sx(tabA, size_a);
			rrx(tabA, size_a);
			return (0);
		}
	}
	else
		return (0);
}

int	ft_test_rxb2(int *tabB, int *size_b)
{
	if (*size_b >= 3)
	{
		rx(tabB, size_b);
		sx(tabB, size_b);
		if (ft_DEC(tabB, size_b))
		{
			sx(tabB, size_b);
			rrx(tabB, size_b);
			return (1);
		}
		else
		{
			sx(tabB, size_b);
			rrx(tabB, size_b);
			return (0);
		}
	}
	else
		return (0);
}
