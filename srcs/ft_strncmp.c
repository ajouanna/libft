/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:32:06 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/14 12:55:15 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The  strcmp() function compares the two strings s1 and s2.  It returns an
** integer less than, equal to, or greater than zero if s1 is found,
** respectively,  to be less than, to match, or be greater than s2.
** The  strncmp() function is similar, except it compares the only first (at
** most) n bytes of s1 and s2.
** The strcmp() and strncmp() functions return an integer less than, equal to,
** or greater  than zero if s1 (or the first n bytes thereof) is found,
** respectively, to be less than, to match, or be greater than s2.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] && s2[i] && (i < n))
	{
		if (s1[i] != s2[i])
			return ((int)(s1[i] - s2[i]));
		i++;
	}
	if (i == n)
		return (0);
	else
		return (s1[i] - s2[i]);
}
