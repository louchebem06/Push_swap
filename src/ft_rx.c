/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:10:11 by bledda            #+#    #+#             */
/*   Updated: 2021/05/18 15:57:36 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
	rx: X is a or b
	ra : rotate a - first elem a to last elem.
	rb : rotate b - first elem a to last elem.
*/

int	rx(int *tab)
{
	int	i;
	int	tmp;

	i = 0;
	while (tab[i])
	{
		if (tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
		}
		i++;
	}
	return (1);
}
