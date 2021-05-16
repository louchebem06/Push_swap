/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 13:43:00 by bledda            #+#    #+#             */
/*   Updated: 2021/03/29 19:09:20 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		((char *)s1)[i] = ((char *)s2)[i];
		if (((char *)s2)[i] == (char)c)
			return (s1 + i + 1);
	}
	return (0);
}
