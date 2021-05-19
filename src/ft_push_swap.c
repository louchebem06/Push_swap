/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 23:48:57 by bledda            #+#    #+#             */
/*   Updated: 2021/05/19 16:59:22 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_swap(int *tabA, int ac)
{
	int size_a = ac - 1;
	int size_b = 0;
	int	*tabB;

	tabB = malloc(sizeof(int) * ac);
	printf("TAB A : ");
	for (int i = 0;i < size_a;i++)
		printf("%d ",tabA[i]);
	printf("\nTAB B : ");
	for (int i = 0;i < size_b;i++)
		printf("%d ",tabB[i]);
	printf("\n");

	printf("TAB A ASC: %d\n", ft_ASC(tabA, &size_a));
	printf("TAB B ASC: %d\n", ft_ASC(tabB, &size_b));
	printf("TAB A DEC: %d\n", ft_DEC(tabA, &size_a));
	printf("TAB B DEC: %d\n", ft_DEC(tabB, &size_b));

	px(tabA, &size_a, tabB, &size_b);
	printf("TAB A : ");
	for (int i = 0;i < size_a;i++)
		printf("%d ",tabA[i]);
	printf("\nTAB B : ");
	for (int i = 0;i < size_b;i++)
		printf("%d ",tabB[i]);
	printf("\n");

	printf("TAB A ASC: %d\n", ft_ASC(tabA, &size_a));
	printf("TAB B ASC: %d\n", ft_ASC(tabB, &size_b));
	printf("TAB A DEC: %d\n", ft_DEC(tabA, &size_a));
	printf("TAB B DEC: %d\n", ft_DEC(tabB, &size_b));

	px(tabA, &size_a, tabB, &size_b);
	printf("TAB A : ");
	for (int i = 0;i < size_a;i++)
		printf("%d ",tabA[i]);
	printf("\nTAB B : ");
	for (int i = 0;i < size_b;i++)
		printf("%d ",tabB[i]);
	printf("\n");

	printf("TAB A ASC: %d\n", ft_ASC(tabA, &size_a));
	printf("TAB B ASC: %d\n", ft_ASC(tabB, &size_b));
	printf("TAB A DEC: %d\n", ft_DEC(tabA, &size_a));
	printf("TAB B DEC: %d\n", ft_DEC(tabB, &size_b));

	ss(tabA, &size_a, tabB, &size_b);
	printf("TAB A : ");
	for (int i = 0;i < size_a;i++)
		printf("%d ",tabA[i]);
	printf("\nTAB B : ");
	for (int i = 0;i < size_b;i++)
		printf("%d ",tabB[i]);
	printf("\n");

	printf("TAB A ASC: %d\n", ft_ASC(tabA, &size_a));
	printf("TAB B ASC: %d\n", ft_ASC(tabB, &size_b));
	printf("TAB A DEC: %d\n", ft_DEC(tabA, &size_a));
	printf("TAB B DEC: %d\n", ft_DEC(tabB, &size_b));

	rx(tabA, &size_a);
	printf("TAB A : ");
	for (int i = 0;i < size_a;i++)
		printf("%d ",tabA[i]);
	printf("\nTAB B : ");
	for (int i = 0;i < size_b;i++)
		printf("%d ",tabB[i]);
	printf("\n");

	printf("TAB A ASC: %d\n", ft_ASC(tabA, &size_a));
	printf("TAB B ASC: %d\n", ft_ASC(tabB, &size_b));
	printf("TAB A DEC: %d\n", ft_DEC(tabA, &size_a));
	printf("TAB B DEC: %d\n", ft_DEC(tabB, &size_b));

	rrx(tabA, &size_a);
	printf("TAB A : ");
	for (int i = 0;i < size_a;i++)
		printf("%d ",tabA[i]);
	printf("\nTAB B : ");
	for (int i = 0;i < size_b;i++)
		printf("%d ",tabB[i]);
	printf("\n");

	printf("TAB A ASC: %d\n", ft_ASC(tabA, &size_a));
	printf("TAB B ASC: %d\n", ft_ASC(tabB, &size_b));
	printf("TAB A DEC: %d\n", ft_DEC(tabA, &size_a));
	printf("TAB B DEC: %d\n", ft_DEC(tabB, &size_b));

	rr(tabA, &size_a, tabB, &size_b);
	printf("TAB A : ");
	for (int i = 0;i < size_a;i++)
		printf("%d ",tabA[i]);
	printf("\nTAB B : ");
	for (int i = 0;i < size_b;i++)
		printf("%d ",tabB[i]);
	printf("\n");

	printf("TAB A ASC: %d\n", ft_ASC(tabA, &size_a));
	printf("TAB B ASC: %d\n", ft_ASC(tabB, &size_b));
	printf("TAB A DEC: %d\n", ft_DEC(tabA, &size_a));
	printf("TAB B DEC: %d\n", ft_DEC(tabB, &size_b));

	rrr(tabA, &size_a, tabB, &size_b);
	printf("TAB A : ");
	for (int i = 0;i < size_a;i++)
		printf("%d ",tabA[i]);
	printf("\nTAB B : ");
	for (int i = 0;i < size_b;i++)
		printf("%d ",tabB[i]);
	printf("\n");

	printf("TAB A ASC: %d\n", ft_ASC(tabA, &size_a));
	printf("TAB B ASC: %d\n", ft_ASC(tabB, &size_b));
	printf("TAB A DEC: %d\n", ft_DEC(tabA, &size_a));
	printf("TAB B DEC: %d\n", ft_DEC(tabB, &size_b));

	free(tabA);
	free(tabB);
}
