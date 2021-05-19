/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:10:11 by bledda            #+#    #+#             */
/*   Updated: 2021/05/19 17:07:26 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
	rx: X is a or b
	ra : rotate a - last elem a to first elem.
	rb : rotate b - last elem a to first elem.
*/

int	rx(int *tab, int *size_tab)
{
	int	i;
	int	tmp;

	i = *size_tab - 1;
	while (i)
	{
		tmp = tab[i];
		tab[i] = tab[i - 1];
		tab[i - 1] = tmp;
		i--;
	}
	return (1);
}
