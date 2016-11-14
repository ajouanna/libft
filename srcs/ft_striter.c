/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:32:06 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/14 12:42:16 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applique la fonction f à chaque caractère de la chaine de
** caractères passée en paramètre argument. 
** Chaque caractère est passé par adresse à la
** fonction f afin de pouvoir être modifié si nécéssaire.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int i;

	i = 0;
	while(s[i])
	{
		f(s + i);
		i++;
	}
}
