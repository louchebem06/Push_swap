/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 20:25:53 by bledda            #+#    #+#             */
/*   Updated: 2021/05/25 21:24:51 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdio.h>

typedef struct s_isduplicate
{
	int		i;
	int		j;
	char	*tmp;
	int		size;
}	t_isduplicate;

typedef struct s_check
{
	int			i;
	long long	j;
	int			*tab;
}	t_check;

typedef struct s_algo
{
	int	max;
	int	min_b;
	int	max_b;
	int	hf;
	int	hs;
	int	b;
	int	i;
}	t_algo;

typedef struct s_min_max
{
	int	i;
	int	j;
	int	z;
	int	x;
}	t_min_max;

int		ft_strisdigit(int ac, char **av);
int		ft_isduplicate(int ac, char **av);
void	ft_push_swap(int *tab, int ac);
int		sx(int *tab, int *size_tab);
int		ss(int *tab, int *size_tab, int *tab2, int *size_tab2);
int		ft_ASC(int *tab, int *size_tab);
int		ft_DEC(int *tab, int *size_tab);
int		px(int *tab, int *size_tab, int *tab2, int *size_tab2);
int		rx(int *tab, int *size_tab);
int		rr(int *tab, int *size_tab, int *tab2, int *size_tab2);
int		rrx(int *tab, int *size_tab);
int		rrr(int *tab, int *size_tab, int *tab2, int *size_tab2);
int		ft_test_rr(int *tabA, int *size_a, int *tabB, int *size_b);
int		ft_test_rxa(int *tabA, int *size_a);
int		ft_test_rxb(int *tabB, int *size_b);
int		ft_test_rrr(int *tabA, int *size_a, int *tabB, int *size_b);
int		ft_test_rrxa(int *tabA, int *size_a);
int		ft_test_rrxb(int *tabB, int *size_b);
void	ft_action_ss(int *tabA, int *size_a, int *tabB, int *size_b);
void	ft_action_sa(int *tabA, int *size_a);
void	ft_action_sb(int *tabB, int *size_b);
void	ft_action_pb(int *tabA, int *size_a, int *tabB, int *size_b);
void	ft_action_pa(int *tabA, int *size_a, int *tabB, int *size_b);
void	ft_action_rr(int *tabA, int *size_a, int *tabB, int *size_b);
void	ft_action_rrr(int *tabA, int *size_a, int *tabB, int *size_b);
void	ft_action_ra(int *tabA, int *size_a);
void	ft_action_rb(int *tabB, int *size_b);
void	ft_action_rra(int *tabA, int *size_a);
void	ft_action_rrb(int *tabB, int *size_b);
int		ft_test_rrxa2(int *tabA, int *size_a);
int		ft_test_rrxb2(int *tabB, int *size_b);
int		ft_test_rxa2(int *tabA, int *size_a);
int		ft_test_rxb2(int *tabB, int *size_b);
int		ft_istolong(int ac, char **av);
int		ft_min(int *tab, int *size);
int		ft_max(int *tab, int *size);
void	algo100(int *tabA, int *size_a, int *tabB, int *size_b);
void	algo500(int *tabA, int *size_a, int *tabB, int *size_b);
void	algocustom(int *tabA, int *size_a, int *tabB, int *size_b);
void	min_max_up(int *tab, int *size, int search);
int		ft_hold_first(int *tabA, int *size_a, int value);
int		ft_hold_second(int *tabA, int *size_a, int value);
void	hold_select(t_algo var, int *tabA, int *size_a);
void	hold_value(t_algo *var, int *size_a, int *tabA);

#endif