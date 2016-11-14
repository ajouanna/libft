/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:32:06 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/14 12:42:38 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applique la fonction f à chaque caractère de la chaine de
** caractères passée en paramètre en précisant son index en premier
** argument. Chaque caractère est passé par adresse à la
** fonction f afin de pouvoir être modifié si nécéssaire.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	while(s[i])
	{
		f(i, s + i);
		i++;
	}
}
