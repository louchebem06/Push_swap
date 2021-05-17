/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 23:48:57 by bledda            #+#    #+#             */
/*   Updated: 2021/05/17 02:29:51 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//sa : swap a - intervertit les 2 premiers éléments au sommet de la pile a. Ne fait rien s’il n’y en a qu’un ou aucun.
//sb : swap b - intervertit les 2 premiers éléments au sommet de la pile b. Ne fait rien s’il n’y en a qu’un ou aucun.
int	sx(int *tab)
{
	int i;
	int tmp;

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
//ss : sa et sb en même temps.
int	ss(int *tab, int *tab2)
{
	if (sx(tab) && sx(tab2))
		return (1);
	return (0);
}
//pb : push b - prend le premier élément au sommet de a et le met sur b. Ne fait rien si a est vide.
//pa : push a - prend le premier élément au sommet de b et le met sur a. Ne fait rien si b est vide.
int	px(int *tab, int *tab2)
{
	int i;
	int j;
	int *tmp;

	i = 0;
	while (tab[i])
		i++;
	if (i > 1)
	{
		tmp = malloc(sizeof(tab2) + sizeof(int));
		tmp[0] = tab[0];
		i = 0;
		j = 1;
		while (tab2[i])
		{
			tmp[j] = tab2[i];
			i++;
			j++;
		}
		free(tab2);
		tab2 = tmp;
		free(tmp);
		tmp = malloc(sizeof(tab) - sizeof(int));
		i = 0;
		j = 1;
		while (tab[j])
		{
			tmp[i] = tab[j];
			i++;
			j++;
		}
		free(tab);
		tab = tmp;
		free(tmp);
		return (1);
	}
	return (0);
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

int	ft_check_order(int *tabA, int *tabB)
{
	int i;
	int tmp;

	i = 0;
	while (tabB[i])
		i++;
	if (i == 0)
	{
		i = 1;
		tmp = tabA[0];
		while (tabA[i])
		{
			if (tmp > tabA[i])
				return (1);
			tmp = tabA[i];
			i++;
		}
		return (0);
	}
	return (1);
}

int	ft_ASC(int *tab)
{
	int i;
	int tmp;

	i = 0;
	while (tab[i])
		i++;
	if (i != 0)
	{
		i = 1;
		tmp = tab[0];
		while (tab[i])
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

int	ft_DEC(int *tab)
{
	int i;
	int tmp;

	i = 0;
	while (tab[i])
		i++;
	if (i != 0)
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

#include <stdio.h>

/*

Tester les function 1 par une pour trouver le bug

*/

void	ft_push_swap(int *tabA)
{
	int *tabB;
	int i;
	int j;

	tabB = malloc(sizeof(tabA));
	while (ft_check_order(tabA, tabB))
	{
		i = 0;
		j = 0;
		while (tabA[i])
			i++;
		while (tabB[j])
			j++;
		j--;
		i--;
		//rra rrb rrr
		if (tabA[0] > tabA[1] && tabA[0] < tabA[1])
		{
			ft_putstr_fd("ss\n", 1);
			ss(tabA, tabB);
		}
		else if (tabA[0] > tabA[1])
		{
			ft_putstr_fd("sa\n", 1);
			sx(tabA);
		}
		else if (tabB[0] < tabB[1])
		{
			ft_putstr_fd("sb\n", 1);
			sx(tabB);
		}
		else if (ft_ASC(tabA))
		{
			ft_putstr_fd("pa\n", 1);
			px(tabB, tabA);
		}
		else if (ft_ASC(tabB))
		{
			ft_putstr_fd("pb\n", 1);
			px(tabA, tabB);
		}
		else if (tabB[0] > tabB[j] && tabA[0] < tabA[i])
		{
			ft_putstr_fd("rr\n", 1);
			rr(tabA, tabB);
		}
		else if (tabB[0] > tabB[j])
		{
			ft_putstr_fd("rb\n", 1);
			rx(tabB);
		}
		else if (tabA[0] < tabA[i])
		{
			ft_putstr_fd("ra\n", 1);
			rx(tabA);
		}
		else if (tabB[0] < tabB[j] && tabA[0] > tabA[i])
		{
			ft_putstr_fd("rrr\n", 1);
			rrr(tabA, tabB);
		}
		else if (tabB[0] < tabB[j])
		{
			ft_putstr_fd("rrb\n", 1);
			rrx(tabB);
		}
		else if (tabA[0] > tabA[i])
		{
			ft_putstr_fd("rra\n", 1);
			rrx(tabA);
		}
		printf("TAB A : ");
		for (int i = 0; tabA[i]; i++)
			printf("%d ", tabA[i]);
		printf("\nTAB B : ");
		for (int i = 0; tabB[i]; i++)
			printf("%d", tabB[i]);
		printf("\n");
	}
	free(tabA);
	free(tabB);
}