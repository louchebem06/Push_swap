/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_px.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 14:48:16 by bledda            #+#    #+#             */
/*   Updated: 2021/05/18 15:58:23 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
	px: X is a or b
	pb : push b - move first elem a to end b.
	pa : push a - move first elem b to end a.
	If just elem or empty, sx is zero action
	return (new tab);
*/

int	*px(int *tab, int *tab2)
{
	int	i;
	int	firstElem;
	int	*tmp;

	i = 0;
	firstElem = tab[0];
	ft_delFirstEntryTab(tab);
	tmp = malloc(sizeof(tab2) + sizeof(int));
	while (tab2[i])
	{
		tmp[i] = tab2[i];
		i++;
	}
	tmp[i] = firstElem;
	return (tmp);
}
