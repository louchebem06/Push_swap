/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 20:25:53 by bledda            #+#    #+#             */
/*   Updated: 2021/05/19 16:56:23 by bledda           ###   ########.fr       */
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
	int	i;
	int	j;
	int	*tab;
}	t_check;

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

#endif