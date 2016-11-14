/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:32:06 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/14 12:41:14 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The  strcmp() function compares the two strings s1 and s2.  It returns an inte‐
** ger less than, equal to, or greater than zero if s1 is found, respectively,  to
** be less than, to match, or be greater than s2.
** The strcmp() and strncmp() functions return an integer less than, equal to,  or
** greater  than zero if s1 (or the first n bytes thereof) is found, respectively,
** to be less than, to match, or be greater than s2.
*/

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((int)(s1[i] - s2[i]));
		i++;
	}
	return (s1[i] - s2[i]);
}
