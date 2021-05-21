/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_px.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 14:48:16 by bledda            #+#    #+#             */
/*   Updated: 2021/05/21 08:04:25 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	px(int *tab, int *size_tab, int *tab2, int *size_tab2)
{
	rrx(tab, size_tab);
	tab2[*size_tab2] = tab[*size_tab - 1];
	*size_tab2 = *size_tab2 + 1;
	*size_tab = *size_tab - 1;
	rx(tab2, size_tab2);
	return (1);
}
