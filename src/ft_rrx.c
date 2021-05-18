/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:51:57 by bledda            #+#    #+#             */
/*   Updated: 2021/05/18 15:57:46 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
	rrx: X is a or b
	rra : move last elem a is first a.
	rrb : move last elem b is first b.
	If just elem or empty, rrx is zero action
*/

int	rrx(int *tab)
{
	int	i;
	int	tmp;

	i = 0;
	while (tab[i])
		i++;
	i--;
	while (i > 0)
	{
		tmp = tab[i - 1];
		tab[i - 1] = tab[i];
		tab[i] = tmp;
		i--;
	}
	return (1);
}