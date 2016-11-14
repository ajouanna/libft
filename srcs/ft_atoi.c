/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <ajouanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 11:56:17 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/14 12:37:29 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The atoi() function converts the initial portion of the string  pointed  to  by
** nptr to int. Trick : compute a negative number to process correctly max int
*/

int	ft_atoi(const char *nptr)
{
	int i;
	int res;
	int sign;

	res = 0;
	sign = -1;
	i = 0;
	while (nptr[i] && (nptr[i] < 33))
	{
		i++;
	}
	if (nptr[i] == '+')
	{
		i++;
	}
	if (nptr[i] == '-')
	{
		sign = 1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		res = 10 * res - (nptr[i] - '0');
		i++;
	}
	return (sign * res);
}
