/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:32:06 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/14 12:36:43 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Alloue (avec malloc(3)) et retourne la copie “fraiche” d’un
** tronçon de la chaine de caractères passée en paramètre. Le
** tronçon commence à l’index start et à pour longueur len. Si
** start et len ne désignent pas un tronçon de chaine valide,
** le comportement est indéterminé. Si l’allocation échoue, la
** fonction renvoie NULL.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	max;

	if ((res = (char *)malloc(sizeof(char) * (len + 1))) != NULL)
	{
		i = start;
		max = start + len;
		if (s)
		{
			while ((i < max) && (s[i]))
			{
				res[i] = s[i];
				i++;
			}
		}
		res[i] = 0;
		return (res);
	}
	else
		return (NULL);
}
