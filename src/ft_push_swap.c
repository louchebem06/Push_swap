/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 23:48:57 by bledda            #+#    #+#             */
/*   Updated: 2021/05/26 17:35:01 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_swap(int *tabA, int ac)
{
	int	size_a;
	int	size_b;
	int	*tabB;
	int	start_size;

	size_a = ac - 1;
	start_size = size_a;
	size_b = 0;
	tabB = malloc(sizeof(int) * ac);
	if (start_size <= 5)
	{
		while (1)
		{
			if (ft_ASC(tabA, &size_a) && size_b == 0)
				break ;
			algocustom(tabA, &size_a, tabB, &size_b);
		}
	}
	else if (start_size <= 100 && !ft_ASC(tabA, &size_a))
		algo100(tabA, &size_a, tabB, &size_b);
	else if (start_size <= 500 && !ft_ASC(tabA, &size_a))
		algo500(tabA, &size_a, tabB, &size_b);
	free(tabA);
	free(tabB);
}
