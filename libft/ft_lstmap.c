/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:00:35 by bledda            #+#    #+#             */
/*   Updated: 2021/03/30 10:07:02 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*content;
	t_list	*next;

	if (!lst)
		return (0);
	content = ft_lstnew(f(lst->content));
	if (!content)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		next = ft_lstnew(f(lst->content));
		if (!next)
		{
			ft_lstclear(&content, del);
			return (0);
		}
		ft_lstadd_back(&content, next);
	}
	return (content);
}

/*
Function name ft_lstmap
Prototype t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *));
Fichiers de rendu -
Paramètres #1. L’adresse du pointeur vers un élément.
#2. L’adresse de la fonction à appliquer.
Valeur de retour La nouvelle liste. NULL si l’allocation échoue.
Fonctions externes autorisées
malloc, free
Description Itère sur la liste lst et applique la fonction f au
contenu de chaque élément. Crée une nouvelle liste
résultant des applications successives de f. la
fonction del est la pour detruire le contenu d un
element si necessaire
*/