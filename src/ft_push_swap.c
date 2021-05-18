/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 23:48:57 by bledda            #+#    #+#             */
/*   Updated: 2021/05/18 16:38:09 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_swap(int *tabA)
{
	int	*tabB;
	int	*tmp;

	tabB = malloc(sizeof(int));
	printf("TAB A : ");
	for (int i = 0;tabA[i];i++)
		printf("%d ",tabA[i]);
	printf("\nTAB B : ");
	for (int i = 0;tabB[i];i++)
		printf("%d ",tabA[i]);
	printf("\n");
	while (!ft_ASC(tabA) || (!ft_ASC(tabA) && tabB[0] == 0))
	{
		if (tabA[0] > tabA[1] && tabB[0] < tabB[1])
		{
			ft_putstr_fd("ss\n", 1);
			ss(tabA, tabB);
			printf("TAB A : ");
			for (int i = 0;tabA[i];i++)
				printf("%d ",tabA[i]);
			printf("\nTAB B : ");
			for (int i = 0;tabB[i];i++)
				printf("%d ",tabA[i]);
			printf("\n");
		}
		else if (tabA[0] > tabA[1])
		{
			ft_putstr_fd("sa\n", 1);
			sx(tabA);
			printf("TAB A : ");
			for (int i = 0;tabA[i];i++)
				printf("%d ",tabA[i]);
			printf("\nTAB B : ");
			for (int i = 0;tabB[i];i++)
				printf("%d ",tabA[i]);
			printf("\n");
		}
		else if (tabB[0] < tabB[1])
		{
			ft_putstr_fd("sb\n", 1);
			sx(tabB);
			printf("TAB A : ");
			for (int i = 0;tabA[i];i++)
				printf("%d ",tabA[i]);
			printf("\nTAB B : ");
			for (int i = 0;tabB[i];i++)
				printf("%d ",tabA[i]);
			printf("\n");
		}
		else if ((!ft_ASC(tabA) && ft_DEC(tabB)) || (!ft_ASC(tabA) && tabB[0] == 0))
		{
			ft_putstr_fd("pb\n", 1);
			tmp = px(tabA, tabB);
			tabB = tmp;
			printf("TAB A : ");
			for (int i = 0;tabA[i];i++)
				printf("%d ",tabA[i]);
			printf("\nTAB B : ");
			for (int i = 0;tabB[i];i++)
				printf("%d ",tabA[i]);
			printf("\n");
		}
		else if (ft_ASC(tabA) && ft_DEC(tabB))
		{
			ft_putstr_fd("pa\n", 1);
			tmp = px(tabB, tabA);
			tabA = tmp;
			printf("TAB A : ");
			for (int i = 0;tabA[i];i++)
				printf("%d ",tabA[i]);
			printf("\nTAB B : ");
			for (int i = 0;tabB[i];i++)
				printf("%d ",tabA[i]);
			printf("\n");
		}
		else
		{
			printf("Solution is not found\n");
			printf("TAB A : ");
			for (int i = 0;tabA[i];i++)
				printf("%d ",tabA[i]);
			printf("\nTAB B : ");
			for (int i = 0;tabB[i];i++)
				printf("%d ",tabA[i]);
			printf("\n");
			break;
		}
	}
	free(tabA);
	free(tabB);
}
