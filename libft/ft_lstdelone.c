/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:00:35 by bledda            #+#    #+#             */
/*   Updated: 2021/03/29 17:04:15 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

/*
Function name ft_lstdelone
Prototype void ft_lstdelone(t_list *lst, void (*del)(void
*));
Fichiers de rendu -
Paramètres #1. L’élement à free
#2. L’adresse de la fonction permettant de
supprimer le contenu de l’élement.
Valeur de retour None
Fonctions externes autorisées
free
Description Libère la mémoire de l’élément passé en argument
en utilisant la fonction del puis avec free(3). La
mémoire de next ne doit pas être free.
*/