/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:00:35 by bledda            #+#    #+#             */
/*   Updated: 2021/03/29 16:53:33 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst)
	{
		f(lst->content);
		ft_lstiter(lst->next, f);
	}
}

/*
Function name ft_lstiter
Prototype void ft_lstiter(t_list *lst, void (*f)(void *));
Fichiers de rendu -
Paramètres #1 L’adresse du pointeur vers un élément.
#2. L’adresse de la fonction à appliquer.
Valeur de retour None
Fonctions externes autorisées
None
Description Itère sur la list lst et applique la fonction f au
contenu chaque élément.
*/