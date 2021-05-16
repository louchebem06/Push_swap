/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:00:35 by bledda            #+#    #+#             */
/*   Updated: 2021/03/29 16:08:13 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		if (tmp->next == 0)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}

/*
Function name ft_lstlast
Prototype t_list *ft_lstlast(t_list *lst);
Fichiers de rendu -
Paramètres #1. Le début de la liste.
Valeur de retour Dernier élément de la liste
Fonctions externes autorisées
None
Description Renvoie le dernier élément de la liste.
*/