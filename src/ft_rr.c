/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:10:17 by bledda            #+#    #+#             */
/*   Updated: 2021/05/21 08:04:43 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rr(int *tab, int *size_tab, int *tab2, int *size_tab2)
{
	if (rx(tab, size_tab) && rx(tab2, size_tab2))
		return (1);
	return (0);
}
