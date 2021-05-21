/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ASC.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 16:05:07 by bledda            #+#    #+#             */
/*   Updated: 2021/05/21 07:44:13 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_ASC(int *tab, int *size_tab)
{
	int	i;
	int	tmp;

	i = *size_tab;
	if (i >= 0)
	{
		i = 1;
		tmp = tab[0];
		while (i < *size_tab)
		{
			if (tmp > tab[i])
				return (0);
			tmp = tab[i];
			i++;
		}
		return (1);
	}
	else
		return (0);
}
