/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:51:51 by bledda            #+#    #+#             */
/*   Updated: 2021/05/19 16:51:15 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
	rrr : exec rra and rrb is again time.
*/

int	rrr(int *tab, int *size_tab, int *tab2, int *size_tab2)
{
	if (rrx(tab, size_tab) && rrx(tab2, size_tab2))
		return (1);
	return (0);
}
