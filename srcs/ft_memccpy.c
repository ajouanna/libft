/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:32:06 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/14 12:38:51 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	const unsigned char *uc_src;
	unsigned char *uc_dest;

	uc_src = src;
	uc_dest = dest;
	i = 0;
	while ((i < n) && (uc_src[i] != c))
	{
		uc_dest[i] = uc_src[i];
		i++;
	}
	if (i == n)
		return (NULL);
	else
		return (dest + i + 1);
}
