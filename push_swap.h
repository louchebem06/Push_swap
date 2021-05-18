/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 20:25:53 by bledda            #+#    #+#             */
/*   Updated: 2021/05/18 15:52:18 by bledda           ###   ########.fr       */
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
void	ft_push_swap(int *tab);
void	ft_delFirstEntryTab(int *tab);
void	ft_delLastEntryTab(int *tab);
int		sx(int *tab);
int		ss(int *tab, int *tab2);
int		ft_ASC(int *tab);
int		ft_DEC(int *tab);
int		*px(int *tab, int *tab2);
int		rx(int *tab);
int		rr(int *tab, int *tab2);
int		rrx(int *tab);
int		rrr(int *tab, int *tab2);

#endif