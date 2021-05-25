/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minimax.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 00:57:15 by bledda            #+#    #+#             */
/*   Updated: 2021/05/25 18:57:01 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_min(int *tab, int *size)
{
	int	i;
	int	min;

	i = 0;
	min = tab[0];
	while (i < *size)
	{
		if (min > tab[i])
			min = tab[i];
		i++;
	}
	return (min);
}

int	ft_max(int *tab, int *size)
{
	int	i;
	int	max;

	i = 0;
	max = tab[0];
	while (i < *size)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}
