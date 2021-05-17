/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 23:48:57 by bledda            #+#    #+#             */
/*   Updated: 2021/05/17 16:03:14 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

#include <stdio.h>

//pb : push b - prend le premier élément au sommet de a et le met sur b. Ne fait rien si a est vide.
//pa : push a - prend le premier élément au sommet de b et le met sur a. Ne fait rien si b est vide.
int	px(int *tab, int *tab2)
{
	int i;
	int j;
	int *tmp;

	i = 0;
	tmp = malloc(sizeof(tab2) + sizeof(int));
	tmp[0] = tab[0];
	i = 0;
	j = 1;
	while (tab2[i])
	{
		tmp[j] = tab2[i];
		j++;
		i++;
	}
	tab2 = tmp;
	return (1);
}
//ra : rotate a - décale d’une position vers le haut tous les élements de la pile a. Le premier élément devient le dernier.
//rb : rotate b - décale d’une position vers le haut tous les élements de la pile b. Le premier élément devient le dernier.
int rx(int *tab)
{
	int i;
	int j;
	int *tmp;

	i = 1;
	j = 0;
	tmp = tab;
	while (tmp[i])
	{
		tab[j] = tmp[i];
		j++;
		i++;
	}
	tab[j] = tmp[0];
	free(tmp);
	return (1);
}
//rr : ra et rb en même temps.
int rr(int *tab, int *tab2)
{
	if (rx(tab) && rx(tab2))
		return (1);
	return (0);
}
//rra : reverse rotate a - décale d’une position vers le bas tous les élements de la pile a. Le dernier élément devient le premier.
//rrb : reverse rotate b - décale d’une position vers le bas tous les élements de la pile b. Le dernier élément devient le premier.
int rrx(int *tab)
{
	int i;
	int j;
	int *tmp;

	i = 0;
	while (tab[i])
		i++;
	if (i > 1)
	{
		tmp = tab;
		tab[0] = tmp[i];
		i = 1;
		j = 0;
		while (tmp[j])
		{
			if (!tmp[j + 1])
			{
				free(tmp);
				return (1);
			}
			tab[i] = tmp[j];
			i++;
			j++;
		}
	}
	return (0);
}
//rrr : rra et rrb en même temps.
int	rrr(int *tab, int *tab2)
{
	if (rrx(tab) && rrx(tab2))
		return (1);
	return (0);
}

void	ft_push_swap(int *tabA)
{
	printf("%d\n", ft_DEC(tabA));
	printf("TAB A : ");
	for (int i = 0; tabA[i]; i++)
		printf("%d ", tabA[i]);
	printf("\n");
}