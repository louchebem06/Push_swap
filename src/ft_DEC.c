/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_DEC.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 16:05:16 by bledda            #+#    #+#             */
/*   Updated: 2021/05/19 17:01:15 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_DEC(int *tab, int *size_tab)
{
	int	i;
	int	tmp;

	i = *size_tab - 1;
	if (i >= 0)
	{
		i = 1;
		tmp = tab[0];
		while (tab[i])
		{
			if (tmp < tab[i])
				return (0);
			tmp = tab[i];
			i++;
		}
		return (1);
	}
	else
		return (0);
}
