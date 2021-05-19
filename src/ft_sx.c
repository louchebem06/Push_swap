/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 16:04:35 by bledda            #+#    #+#             */
/*   Updated: 2021/05/19 16:14:55 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

/*
	sx: X is a or b
	sa : swap a - Switch two last element.
	sb : swap b - Switch two last element
	If just elem or empty, sx is zero action
*/

int	sx(int *tab, int *size_tab)
{
	int	tmp;

	if (*size_tab >= 2)
	{
		tmp = tab[*size_tab - 1];
		tab[*size_tab - 1] = tab[*size_tab - 2];
		tab[*size_tab - 2] = tmp;
		return (1);
	}
	return (0);
}
