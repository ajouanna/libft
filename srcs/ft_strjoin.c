/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:32:06 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/14 13:02:58 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Alloue (avec malloc(3)) et retourne une chaine de caractères
** “fraiche” terminée par un ’\0’ résultant de la concaténation
** de s1 et s2. Si l’allocation echoue, la fonction renvoie NULL.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if ((res = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	i = 0;
	if (s1)
		while (s1[i])
		{
			res[i] = s1[i];
			i++;
		}
	j = i;
	i = 0;
	if (s2)
		while (s2[i])
		{
			res[i + j] = s2[i];
			i++;
		}
	res[i + j] = 0;
	return (res);
}
