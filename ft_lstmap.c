/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <ajouanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 11:56:17 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/15 11:37:13 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Parcourt la liste lst en appliquant à chaque maillon la fonction
** f et crée une nouvelle liste “fraiche” avec malloc(3) ré-
** sultant des applications successives. Si une allocation échoue,
** la fonction renvoie NULL.
*/

t_list 		*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list *pt_next;
	t_list *pt;

	if (lst->next)
	{
		pt_next = ft_lstmap(lst->next, f);
	}
	pt = f(lst);
	if (pt)
		ft_lstadd(&pt_next, pt);
	return (pt);
}
