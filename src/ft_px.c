/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_px.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 14:48:16 by bledda            #+#    #+#             */
/*   Updated: 2021/05/19 16:07:25 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
	px: X is a or b
	pb : push b - move last elem a to end b.
	pa : push a - move last elem b to end a.
	If just elem or empty, sx is zero action
	return (new tab);
*/

int	px(int *tab, int *size_tab, int *tab2, int *size_tab2)
{
	tab2[*size_tab2] = tab[*size_tab - 1];
	*size_tab2 = *size_tab2 + 1;
	*size_tab = *size_tab - 1;
	return (1);
}
