/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:51:51 by bledda            #+#    #+#             */
/*   Updated: 2021/05/21 08:04:48 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rrr(int *tab, int *size_tab, int *tab2, int *size_tab2)
{
	if (rrx(tab, size_tab) && rrx(tab2, size_tab2))
		return (1);
	return (0);
}
