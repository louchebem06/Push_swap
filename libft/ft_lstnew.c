/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:00:35 by bledda            #+#    #+#             */
/*   Updated: 2021/03/29 18:00:52 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(list));
	if (list == 0)
		return (0);
	list->content = content;
	list->next = 0;
	return (list);
}

/*
Function name ft_lstnew
Prototype t_list *ft_lstnew(void *content);
Fichiers de rendu -
Paramètres #1. Le contenu du nouvel élément.
Valeur de retour Le nouvel element
Fonctions externes autorisées
malloc
Description Alloue (avec malloc(3)) et renvoie un nouvel
élément. la variable content est initialisée à
l’aide de la valeur du paramètre content. La
variable ’next’ est initialisée à NULL.
*/