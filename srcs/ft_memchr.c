/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:32:06 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/14 12:39:04 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The  memchr()  function  scans  the  initial n bytes of the memory area
** pointed to by s for the first instance of c.  Both c and the  bytes  of
** the memory area pointed to by s are interpreted as unsigned char.
** The  memchr() function returns a pointer to the matching
** byte or NULL if the character does not occur in the given memory area.
*/

void			*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	const unsigned char *uc_s;

	uc_s = s;
	i = 0;
	while (i < n)
	{
		if (uc_s[i] == c)
			return ((void *)(uc_s + i));
		i++;
	}
	return (NULL);
}
