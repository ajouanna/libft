/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:32:06 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/14 12:43:04 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** je crois que par rapport a strncat, il faut juste
** renvoyer la longueur de dest  
*/

size_t                  ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dest_len = ft_strlen(dst);
	size_t i;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';

	return (ft_strlen(dst));
}
