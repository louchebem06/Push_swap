/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 20:25:53 by bledda            #+#    #+#             */
/*   Updated: 2021/05/17 01:41:42 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

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

#endif