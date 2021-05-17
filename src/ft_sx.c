/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 16:04:35 by bledda            #+#    #+#             */
/*   Updated: 2021/05/17 16:13:36 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

/*
	sx: X is a or b
	sa : swap a - Switch two first element.
	sb : swap b - Switch two first element
	If just elem or empty, sx is wero action
*/

int	sx(int *tab)
{
	int	i;
	int	tmp;

	i = 0;
	while (tab[i])
		i++;
	if (i > 1)
	{
		tmp = tab[0];
		tab[0] = tab[1];
		tab[1] = tmp;
		return (1);
	}
	return (0);
}
