/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delLastEntryTab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:54:12 by bledda            #+#    #+#             */
/*   Updated: 2021/05/17 16:02:07 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_delLastEntryTab(int *tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	i--;
	tab[i] = tab[i + 1];
}
